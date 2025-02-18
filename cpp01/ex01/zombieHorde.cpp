/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:04:04 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 17:47:56 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    
    int i;
    
    (void)name;
    i = -1;
    Zombie* xZombies = new Zombie[N];
    while (++i < N) {
        xZombies[i].setName(name);
        xZombies[i].announce();
    }
    return (xZombies);
}
