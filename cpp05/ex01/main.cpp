/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 19:03:18 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    Bureaucrat b("b", 40);
    Bureaucrat a("a", 145);
    Form x("xFile", 100, 50);

    std::cout << std::endl <<std::endl;
    x.beSigned(a);
    x.beSigned(b);
    std::cout << std::endl <<std::endl;

    x.beExecuted(a);
    x.beExecuted(b);

    return 0;
}