/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 20:53:09 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

    const Bureaucrat b("b", 40);
    const Bureaucrat a("a", 145);
    ShrubberyCreationForm z("SHRUB");

    z.beSigned(a);
    z.beSigned(b);
    z.beExecuted(b);
    z.beExecuted(a);
    std::cout << std::endl <<std::endl;
   

    

    return 0;
}