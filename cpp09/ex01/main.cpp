/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:08:55 by morgane           #+#    #+#             */
/*   Updated: 2025/04/07 17:51:59 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cerr << "Input error: Two arguments required\n";
        return 1;
    }
    RPN a;
    a.parseInput(argv);
    
    return 0;
}