/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:45 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/02 13:14:26 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(): _data(), _exchange() {}

Bitcoin::Bitcoin(const Bitcoin& copy): _data(copy._data), _exchange(copy._exchange) {
	
}

Bitcoin::~Bitcoin() {}

Bitcoin& Bitcoin::operator=(const Bitcoin& rhs) {
	
	if (this != &rhs) {
		_data = rhs._data;
		_exchange = rhs._data;
	}
	return (*this);
}

void Bitcoin::downloadDataBase()
{
	std::ifstream infile("data.csv");
	std::string line;

	if (!infile.is_open())
	{
		std::cerr << "Error: input is invalid or empty\n";
		return;
	}
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		std::istringstream str(line);
		std::string date, valueStr;

		if (!std::getline(str, date, ',') || !std::getline(str, valueStr))
			throw std::runtime_error("Error: problem on line " + line);
		if (isValidDateFormat(date) == false)
			throw std::invalid_argument("Error: invalid date format: " + date);
		if (isValidDate(date) == false)
			throw std::invalid_argument("Error: invalid date: " + date);
		if (!isdigit(valueStr[0]))
			throw std::invalid_argument("Error: invalid value format on line " + line);
		float value = std::atof(valueStr.c_str());
		if (value < 0)
			throw std::domain_error("Error: negative value on line: " + line);
		_data[date] = value;
	}
}


void Bitcoin::parseDataBaseToCheck(char **argv)
{
	std::ifstream infile(argv[1]);
	std::string line;
	
	if (!infile.is_open())
	{
		std::cerr << "Error: input is invalid or empty\n";
		return ;
	}
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		std::istringstream str(line);
		std::string date, rateStr;
		
		if (!std::getline(str, date, ' ') || !std::getline(str, rateStr)) {
			std::cerr << "Error: problem on line " << line << std::endl;
			continue;
		}
		if (isValidDateFormat(date) == false) {
			std::cerr << "Error: invalid date format: " << date << std::endl;
			continue;
		}
		if (line[10] != ' ' || line[11] != '|' || line[12] != ' ') {
			std::cerr << "Error: invalid format on line " << line << std::endl;
			continue;
		}
		rateStr.erase(0, 2);
		if (!isdigit(rateStr[0]) && rateStr[0] != '-') {
			std::cerr << "Error: invalid value format on line " << line << std::endl;
			continue;
		}
		float rate = std::atof(rateStr.c_str());
		if (rate < 0) {
			std::cerr << "Error: not a positive number on line " << line << std::endl;
			continue;
		}
		if (rate > 1000) {
			std::cerr << "Error: too large a number on line " << line << std::endl;
			continue;
		}
		
		try {
			float value = getValueByDate(date);
			std::cout << date << " => " << rate << " = " << value * rate << std::endl;
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return ;
}

bool Bitcoin::isValidDate(const std::string& date)
{
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	
	int maxDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month < 1 || month > 12)
		return false;
	if (month == 2 && isBiYear(year))
		maxDays[1] = 29;
	if (day < 1 || day > maxDays[month - 1])
		return false;
	if (year < 2009)
		throw std::invalid_argument("Error: Bitcoin activation was in 2009");
	if (year == 2009 && month == 1 && day < 3)
		throw std::invalid_argument("Error: Bitcoin activation was on January 3rd, 2009");
	if (year > 2025)
		throw std::invalid_argument("Error: No data available for that date");
	if (year == 2025 && month > 3)
		throw std::invalid_argument("Error: No data available for that date");

	return true;
}

float Bitcoin::getValueByDate(const std::string& searchDate)
{
	std::map<std::string, float>::iterator it = _data.lower_bound(searchDate);

	if (it->first == searchDate && it != _data.end())
	return it->second;
	else if (it->first != searchDate && it == _data.end()) {
		--it;
		return it->second;
	}
	else if (it-> first != searchDate && it == _data.begin())
		throw std::runtime_error("Error: no exchange rate available for date " + searchDate);
		else
		--it;
	return it->second;
}

bool Bitcoin::isValidDateFormat(const std::string& date)
{
	if (date.length() == 10 && std::isdigit(date[0]) && std::isdigit(date[1])
		&& std::isdigit(date[2]) && std::isdigit(date[3]) && date[4] == '-' && std::isdigit(date[5])
		&& std::isdigit(date[6]) && date[7] == '-' && std::isdigit(date[8]) && std::isdigit(date[9]))
			return true;
	
	return false;
}

bool Bitcoin::isBiYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		return true;
	if (year % 400 == 0)
		return true;

	return false;
}

void Bitcoin::printData()
{
	for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it)
	{
		std::cout << it->first << " ---> " << it->second << std::endl;
	}
}
