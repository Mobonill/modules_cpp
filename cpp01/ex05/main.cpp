/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:59:56 by morgane           #+#    #+#             */
/*   Updated: 2025/02/26 22:26:50 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

    (void)ac;
    (void)av;
    
    Harl harl;
    std::string level = "ERROR";
    
    harl.complain(level);
    return (0);
}
