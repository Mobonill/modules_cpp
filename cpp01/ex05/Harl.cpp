/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:05:21 by morgane           #+#    #+#             */
/*   Updated: 2025/02/22 20:24:53 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    
    
}

Harl::~Harl() {

    
}

void Harl::debug(void) {
    std::cout << "Debug level" << std::endl;
}

void Harl::info(void) {
    std::cout << "Info level" << std::endl;
}

void Harl::warning(void) {
    std::cout << "Warning level" << std::endl;    
}

void Harl::error(void) {
    std::cout << "Error level" << std::endl;    
}

void Harl::complain(std::string level) {
    
    
    if (strcmp("DEBUG", level.c_str()) == 0)
        debug();
    else if (strcmp("INFO", level.c_str()) == 0)
        info();
    else if (strcmp("WARNING", level.c_str()) == 0)
        warning();
    else if (strcmp("ERROR", level.c_str()) == 0)
        error();
    else
        std::cout << "Harl has not been automated for that level" << std::endl;
}