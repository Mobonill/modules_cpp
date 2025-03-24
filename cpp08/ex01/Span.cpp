/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:30:24 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/24 19:32:44 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"


Span::Span(): _stock(), N(0) {
	// _stock.reserve(N);
}

Span::Span(const Span& copy): _stock(copy._stock), N(copy.N) {}

Span::Span(unsigned int index): _stock(), N(index) {
	_stock.reserve(index);
}

Span::~Span() {}

Span& Span::operator=(const Span& rhs) {

	if (this != &rhs) {
		this->_stock = rhs._stock;
		this->N = rhs.N;
	}
	return (*this);
}

void Span::printVectorElements(void) {

	for (unsigned int i = 0; i < this->N; i++)
		std::cout << "stock[" << i << "] --> " << _stock[i] << std::endl;
}


int Span::addRangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int res = -1;

	if ((static_cast<size_t>(distance(begin, end)) + _stock.size()) > N)
		throw std::out_of_range("Exceeding maximum capicity");

	_stock.insert(_stock.end(), begin, end);
	// for (size_t i = 0; i < N; ++i)
	// 	std::cout << _stock[i] << " ";
	res = *std::max_element(_stock.begin(), _stock.end()) - *std::min_element(_stock.begin(), _stock.end());

	return (res);
}

void Span::addNumber(unsigned int number) {
	
	if (_stock.size() < N)
		_stock.push_back(number);
	else
		throw std::overflow_error("Vector is full");
	return;
}

int Span::longestSpan() {
	
	int res;

	res = *std::max_element(_stock.begin(), _stock.end()) - *std::min_element(_stock.begin(), _stock.end());
	return (res);
}

int Span::shortestSpan() {
	
	int res = INT_MAX;

	std::sort(_stock.begin(), _stock.end());
	for (unsigned int i = 1; i < N; ++i)
	{
		int tmp = _stock[i] - _stock[i - 1];
		if (tmp < res)
			res = tmp;
	}
	return (res);
}
