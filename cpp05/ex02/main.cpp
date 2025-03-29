/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/29 17:18:19 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	try
	{
		const Bureaucrat b("b", 146);
		Bureaucrat a("a", 136);
		ShrubberyCreationForm t;

		std::cout << "SIGN ---> " <<  std::endl;
		t.beSigned(a);
		t.beSigned(b);
		std::cout << "EXEC  ---> " <<  std::endl;
		t.execute(b);
		t.execute(a);
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what();
	}


	try {
		const Bureaucrat c("c", 73);
		Bureaucrat d("d", 44);
		RobotomyRequestForm rob;

		std::cout << "SIGN grade ---> " << rob.getSignGrade() << std::endl;
		c.executeForm(rob);
		rob.beSigned(c);
		rob.beSigned(d);
		c.executeForm(rob);
		std::cout << "EXEC grade ---> " << rob.getExecGrade() << std::endl;
		rob.execute(d);
		rob.execute(c);
		d.executeForm(rob);
		c.executeForm(rob);
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what();
	}
	std::cout << std::endl <<std::endl << std::endl;

	try {
		Bureaucrat y("y", 4);
		const Bureaucrat z("z", 26);
		PresidentialPardonForm x;
		std::cout << "SIGN grade ---> " << x.getSignGrade() << std::endl;
		x.beSigned(z);
		x.beSigned(y);
		std::cout << "EXEC grade ---> " << x.getExecGrade() << std::endl;
		x.execute(y);
		x.execute(z);
	}
	catch (std::exception &ex)
	{
		std::cerr << "Error: " << ex.what();
	}

	return 0;
}