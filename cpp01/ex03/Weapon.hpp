/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:39:56 by morgane           #+#    #+#             */
/*   Updated: 2025/02/19 16:23:01 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon {

    public:
        Weapon();
        Weapon(const std::string &type);
        ~Weapon();
        void setType(const std::string &type);
        const std::string &getType(void)const;

    private:
        std::string _type;
    
};