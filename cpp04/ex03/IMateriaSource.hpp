/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:25:04 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 20:30:56 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"


class IMateriaSource {
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria * m) = 0;
        virtual AMateria *createMateria(std::string const &type) = 0;
};