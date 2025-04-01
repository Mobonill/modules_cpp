/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:45 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/01 23:41:26 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(): _data() {}

Bitcoin::Bitcoin(const Bitcoin& copy): _data(copy._data) {
	
}

Bitcoin::~Bitcoin() {}

void Bitcoin::downloadDataBase(char **argv)
{
	std::ifstream infile(argv[1]);
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

bool Bitcoin::isValidDate(const std::string& date)
{
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12)
		return false;

	int maxDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isBiYear(year))
		maxDays[1] = 29;
	if (day < 1 || day > maxDays[month - 1])
		return false;
	//if (year > 2025)
		

	return true;
}

float Bitcoin::parseDataBaseToCheck(char **argv, std::string& searchDate)
{
	std::ifstream infile(argv[2]);
	std::string line;
	float tmp = -1;

	if (!infile.is_open())
	{
		std::cerr << "Error: input is invalid or empty\n";
		return (-1);
	}
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		std::istringstream str(line);
		std::string date, valueStr;

		if (!std::getline(str, date, ' ') || !std::getline(str, valueStr))
			throw std::runtime_error("Error: problem on line " + line);
		if (isValidDateFormat(date) == false)
			throw std::invalid_argument("Error: invalid date format: " + date);
		if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
			throw std::invalid_argument("Error: invalid format on line " + line);
		valueStr.erase(0, 2);
		if (!isdigit(valueStr[0])) {
			std::cout << "ValueStr --->" << valueStr[0] << std::endl;
			throw std::invalid_argument("Error: invalid value format on line " + line);
		}
		float value = std::atof(valueStr.c_str());
		if (value < 0 || value > 1000)
			throw std::domain_error("Error: value has to be between 0 and 1000 on line " + line);
		if (searchDate == date)
			tmp = value;
	}
	return (tmp);
}

void Bitcoin::printData()
{
	for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it)
	{
		std::cout << it->first << " ---> " << it->second << std::endl;
	}
}

float Bitcoin::getValueByDate(const std::string &date) const
{
	std::map<std::string, float>::const_iterator it = _data.find(date);

	if (it != _data.end())
		return it->second;
	throw std::runtime_error("Date not found " + date);
}
