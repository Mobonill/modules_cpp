/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:46:28 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 17:43:30 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {

    public:
        Zombie(void);
        ~Zombie();
        void setName(std::string name);
        void announce(void);

    private:
        std::string _name;
    
};

Zombie* zombieHorde(int N, std::string name);
