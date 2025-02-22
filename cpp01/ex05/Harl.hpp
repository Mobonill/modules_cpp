/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:00:41 by morgane           #+#    #+#             */
/*   Updated: 2025/02/22 20:15:11 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>
#include <stdio.h>

class Harl {

    public:
        Harl();
        ~Harl();
        void complain(std::string level);

    private:
        void debug(void );
        void info(void);
        void warning(void);
        void error(void);
    
};
