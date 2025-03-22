/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:39:02 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/22 14:41:46 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void upperCase(std::string& str) {
	
	for(size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

void square(int& n) {
	n = n * n;
}


int main(void) {

	int tab[4] = {1, 2, 3, 4};

	std::cout << "BEFORE ---> " << tab[0] << ", " << tab[1] << ", " << tab[2] << ", " << tab[3] << std::endl;
	iter(tab, 4, square);
	std::cout << "AFTER ---> " << tab[0] << ", " << tab[1] << ", " << tab[2] << ", " << tab[3] << std::endl << std::endl;

	

	std::string str_tab[3] = {
		"Hello",
		"There!",
		"Obiwan Kenobi"
	};

	std::cout << "BEFORE ---> " << str_tab[0] << " " << str_tab[1] << " "  << str_tab[2] << std::endl;
	iter(str_tab, 3, upperCase);
	std::cout << "AFTER ----> " << str_tab[0] << " " << str_tab[1] << " "  << str_tab[2] << std::endl;

	return 0;
}