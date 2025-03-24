/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:48:51 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/24 19:26:12 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {


	Span span(5);
	try {
	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(11);

	}
	catch (std::overflow_error &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	span.printVectorElements();
	int smallest = span.shortestSpan();
	std::cout << "Shortest distance ---> " << smallest << std::endl;
	int longest = span.longestSpan();
	std::cout << "Longuest distance ---> " << longest << std::endl;

	Span bigOne(10000);
	std::vector<int> other;
	int res = -1;
	
	for (size_t i = 0; i < 10000; ++i)
		other.push_back(i + 1);
	try
	{
		res = bigOne.addRangeOfIterators(other.begin(), other.end()); // Un seul appel suffit
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "Res ---> " << res << std::endl;

	return 0;
}