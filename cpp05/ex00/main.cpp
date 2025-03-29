/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/29 15:42:31 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	try
	{
		Bureaucrat a("a", 150);
		Bureaucrat b;
		b = a;

		a.incrementGrade();
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what();
	}

	return 0;
}