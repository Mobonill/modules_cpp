/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 16:54:23 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

    const Bureaucrat b("b", 146);
    Bureaucrat a("a", 136);
    ShrubberyCreationForm t;

    std::cout << "SIGN grade ---> " << t.getSignGrade() << std::endl;
    t.beSigned(a);
    t.beSigned(b);
    std::cout << "EXEC grade ---> " << t.getExecGrade() << std::endl;

    try {
        t.execute(b);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        t.execute(a);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    Intern intern;
    AForm* rrf;

    rrf = intern.makeForm("RRF", "Bender");
    if (rrf) {
        Bureaucrat b("bureaucrat", 44);
        rrf->beSigned(b);

        try {
            b.executeForm(*rrf);
        } catch (const std::exception &e) {
            std::cerr << "Execution failed: " << e.what() << std::endl;
        }

        delete rrf;
    }

    AForm* unknown = intern.makeForm("unknown", "Target X");
    if (!unknown) {
        std::cerr << "The intern couldn't create this form." << std::endl;
    }


    return 0;
}
