/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:59:28 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/07 19:14:20 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& copy): _stack(copy._stack) {}

RPN::~RPN() {}

RPN RPN::operator=(const RPN& rhs) {
	
    if (this != &rhs) {
        _stack = rhs._stack;
    }
    return(*this);
}

bool RPN::isNumber(const std::string& str) {
    if (str.length() != 1)
        return false;
    if (!std::isdigit(str[0]))
        return false;
    else
        return true;
}

int stringToInt(const std::string& str) {
	std::stringstream ss(str);
	int value;
	
	ss >> value;
	
	return (value);
}

std::string intToString(int value) {
	std::stringstream ss;
	
	ss << value;
	
	return (ss.str());
}


void RPN::parseInput(char **argv ) {

	std::stringstream ss(argv[1]);
	std::string token;

	while (ss >> token)
	{
		if (isNumber(token))
			_stack.push(token);
		else if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (_stack.size() < 2) {
				std::cerr << "Error" << std::endl;
				return;
			}
			int b = stringToInt(_stack.top());
			_stack.pop();
			int a = stringToInt(_stack.top());
			_stack.pop();
			int result = 0;

			if (token == "+")
				result = a + b;
			else if (token == "-")
				result = a - b;
			else if (token == "*")
				result = a * b;
			else if (token == "/") {
				if (b == 0) {
					std::cerr << "Error: Divisions by 0 are impossible" << std::endl;
					return;
				}
				result = a / b;
			}
			_stack.push(intToString(result));
		}
		else {
			std::cerr << "Error: invalid token" << std::endl;
			return;
		}
	}
	
	if (_stack.size() != 1) {
		std::cerr << "Error: input not valid" << std::endl;
		return;
	}
	std::cout << _stack.top() << std::endl;
}

void RPN::printStack(void)
{

	for (long unsigned int i = 0; !_stack.empty(); i++)
	{
		std::cout << "Top of my stack ---> " << _stack.top() << std::endl;
		_stack.pop();
	}
}
