/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:21:23 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/23 15:55:27 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::Base() throw() {}

Base::~Base() throw() {}

Base::Base(const Base& copy) throw() {
	*this = copy;
}

Base& Base::operator=(const Base& rhs) throw() {

	(void)rhs;
	return (*this);
}

const char *Base::Casting::what() const throw()
{
	return "Can't cast this variable\n";
}

Base *generate(void)
{
	static bool initialized = false;
	if (!initialized)
	{
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		initialized = true;
	}

	int random = std::rand() % 3;

	switch (random)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return NULL;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Error: Unknown type" << std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type: A" << std::endl;
	}
	catch (...) {
	}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type: B" << std::endl;
	}
	catch (...) {
	}

	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "Type: C" << std::endl;
	}
	catch (...) {
	}
}