/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:36 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/07 20:02:41 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <sstream>
#include <regex.h>
#include <cstring>

class Bitcoin {


	private:
		std::map<std::string, float> _data;
		std::map<std::string, float> _exchange;

	public:
		Bitcoin();
		Bitcoin(const Bitcoin& copy);
		~Bitcoin();
		Bitcoin& operator=(const Bitcoin& rhs);
		void downloadDataBase(void);
		void parseDataBaseToCheck(char **argv);
		float getValueByDate(const std::string& searchDate);
		bool isValidDateFormat(const std::string& date);
		bool isValidDate(const std::string& date);
		bool isBiYear(int year);
		void printData();

	
};
