/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:05:21 by morgane           #+#    #+#             */
/*   Updated: 2025/02/26 22:26:02 by morgane          ###   ########.fr       */
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
    
    Harl harl;

    void (Harl::*functptr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    const char *choice[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    bool autom = false;

    while (i < 4) {
        if (!strcmp(choice[i], level.c_str())) {
            autom = true;
            (harl.*functptr[i])();
        }
        i++;
    }
    if (autom == false)
        std::cout << "Harl has not been automated for that level" << std::endl;
    return ;
}
