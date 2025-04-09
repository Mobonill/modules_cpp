/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:30:59 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/07 17:52:10 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
#include <ostream>


class RPN {

	private:
		std::stack<std::string> _stack;
	
	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();
		RPN operator=(const RPN& rhs);
		void parseInput(char **argv);
		void printStack(void);
		bool isNumber(const std::string& str);


};

int stringToInt(const std::string& str);
std::string intToString(int value);