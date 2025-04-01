/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:36 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/01 23:34:41 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <sstream>
#include <regex.h>

class Bitcoin {


	private:
		std::map<std::string, float> _data;

	public:
		Bitcoin();
		Bitcoin(const Bitcoin& copy);
		~Bitcoin();
		void downloadDataBase(char **argv);
		void printData();
    	float getValueByDate(const std::string& date) const;
		bool isValidDate(const std::string& date);
		bool isBiYear(int year);
		bool isValidDateFormat(const std::string& date);
		float parseDataBaseToCheck(char **argv, std::string& searchDate);

	
};
