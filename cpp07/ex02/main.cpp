/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:17:59 by morgane           #+#    #+#             */
/*   Updated: 2025/03/23 18:22:52 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main () {
    
	Array<int> tab;

	try {
		std::cout << "Array size --->" << tab.size() << std::endl;
		std::cout << tab[0] << std::endl;

	}
	catch (const std::out_of_range &e) {
		std::cerr << "Out of range error: " << e.what() << std::endl;
	}

	Array<std::string> array(3);
	array[1] = "Pumpkin";
	
	try {
		std::cout << "Array size --->" << array.size() << std::endl;
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
		std::cout << array[2] << std::endl;
		std::cout << array[3] << std::endl;
	}
	catch (const std::out_of_range &e) {
		std::cerr << "Out of range error: " << e.what() << std::endl;
	}

	Array<int> example(2);
	example[0] = 4;
	example[1] = 2;
	tab = example;
	tab[0] = 4;
	tab[1] = 2;

	try {
		std::cout << "Array size --->" << example.size() << std::endl;
		std::cout << example[0] << std::endl;
		std::cout << example[1] << std::endl;
		std::cout << "Array size --->" << tab.size() << std::endl;
		std::cout << tab[0] << std::endl;
		std::cout << tab[1] << std::endl;
	}
	catch (const std::out_of_range &e) {
		std::cerr <<" Out of range error: " << e.what() << std::endl;
	} 
	

	return 0;
}