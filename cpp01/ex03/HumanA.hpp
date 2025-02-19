/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:54:18 by morgane           #+#    #+#             */
/*   Updated: 2025/02/19 16:16:06 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack(void);

    private:
        std::string _name;
        Weapon &_weapon;
    
};
