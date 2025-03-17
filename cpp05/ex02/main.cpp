/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/17 16:49:43 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

    const Bureaucrat b("b", 146);
    Bureaucrat a("a", 136);
    ShrubberyCreationForm t;

	std::cout << "SIGN grade ---> " << t.getSignGrade() << std::endl;
    t.beSigned(a);
    t.beSigned(b);
	std::cout << "EXEC grade ---> " << t.getExecGrade() << std::endl;
    t.execute(b);
    t.execute(a);
    std::cout << std::endl <<std::endl << std::endl;


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
    std::cout << std::endl <<std::endl << std::endl;


	Bureaucrat y("y", 4);
	const Bureaucrat z("z", 26);
	PresidentialPardonForm x;

	std::cout << "SIGN grade ---> " << x.getSignGrade() << std::endl;
	x.beSigned(z);
	x.beSigned(y);
	std::cout << "EXEC grade ---> " << x.getExecGrade() << std::endl;
	x.execute(y);
	x.execute(z);

    return 0;
}