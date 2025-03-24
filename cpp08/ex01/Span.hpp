/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:49:14 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/24 19:32:20 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <stdexcept>
#include <limits.h>

class Span {

	private:
		std::vector<int> _stock;
		unsigned int N;

	public:
		Span();
		Span(const Span& copy);
		Span(unsigned int index);
		~Span();
		Span& operator=(const Span& rhs);
		void addNumber(unsigned int number);
		void printVectorElements(void);
		int longestSpan(void);
		int shortestSpan();
		int addRangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);


};