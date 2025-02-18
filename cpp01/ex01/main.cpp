/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:46:46 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 17:51:42 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i;
	Zombie* a;

	i = 40;
	std::cout << "\"A horde is coming !\"" << std::endl <<std::endl;
	
	a = zombieHorde(i, "Jean-Eude");
	std::cout << std::endl;
	std::cout << "*Heavy machine gun shouting*" << std::endl <<std::endl;
	if (i < 10)
		std::cout << "It was not a horde..." <<std::endl;
	
	delete[] a;
	return (0);
}