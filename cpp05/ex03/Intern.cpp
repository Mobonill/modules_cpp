/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:47:40 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 16:59:27 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    
}

Intern::Intern(const Intern& other) {
    
    (void)other;
}

Intern& Intern::operator=(const Intern& other) {
    
    (void)other;
    return *this;
}

Intern::~Intern() {
    
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {

    const std::string type[3] = {
        "SCF",
        "RRF",
        "PPF"
    };
    AForm* forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    for (int i = 0; i < 3; ++i) {
        if (name == type[i]) {
            std::cout << "Intern creates " << name << std::endl;
            for (int j = 0; j < 3; ++j)
            {
                if (j != i)
                    delete forms[j];
            }
            return forms[i];
        }
    }
    std::cerr << "Error: Form " << name << " not found" << std::endl;
    for (int i = 0; i < 3; ++i)
        delete forms[i];

    return (NULL);
}
