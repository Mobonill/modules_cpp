/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:58:01 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 18:34:13 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {

    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &strinREF = variable;
    
    std::cout << "Memory address of the string variable: " << &variable << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &strinREF<< std::endl << std::endl;

    std::cout << "The value of the string variable: " << variable << std::endl;
    std::cout << "The value pointed to be stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << strinREF << std::endl;
    return (0);
}