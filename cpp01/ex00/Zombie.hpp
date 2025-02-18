/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:46:28 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 16:26:43 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);

    private:
        std::string _name;
    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
