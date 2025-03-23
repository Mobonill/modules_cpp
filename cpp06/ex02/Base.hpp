/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:18:58 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/19 19:10:36 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>
#include <ctime>
#include <cstdlib>


class Base {
	
	public:
		Base() throw();
		Base(const Base &copy) throw();
		Base &operator=(const Base &rhs) throw();
		virtual ~Base() throw();

		class Casting : public std::exception
		{
			const char *what() const throw();
		};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
