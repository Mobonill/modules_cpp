/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:46:46 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 16:38:27 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    
    Zombie* a;
    Zombie b("Ge");
    Zombie c("Chachou");
    
    std::cout << "OMG Ge and Chachou turned into zombies !" <<std::endl <<std::endl;
    
    randomChump("Petunia");
    std::cout << "Who was that chump?!" << std::endl <<std::endl;
    
    std::cout << "Nana is going to be a newZombie !" <<std::endl;
    a = newZombie("Nana");
    a->announce();
    std::cout << "Nana is coming for us, kill her !" <<std::endl;
    a->announce();
    std::cout << "*Random 4yo metal girl opens fire on Nana*" <<std::endl;
    delete(a);
    std::cout <<"Let the program kill Ge and Chachou...." <<std::endl <<std::endl;
    return (0);
}