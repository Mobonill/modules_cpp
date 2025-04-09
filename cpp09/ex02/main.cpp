/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:20:47 by morgane           #+#    #+#             */
/*   Updated: 2025/04/08 18:34:35 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    
    clock_t start = clock();
    
    if (argc < 3) {
        std::cerr << "Error: No elements to sort\n";
        return 1;
    }
    PmergeMe program;
    
    program.launchProgram(argc, argv);
    
    clock_t end = clock();
    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "\nTime to process a range  : " << time * 1e6 << " us" << std::endl;
    
    return 0;
}