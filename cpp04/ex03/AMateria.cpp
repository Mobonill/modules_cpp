/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:01:21 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 21:44:15 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructor called." << std::endl;
    return ;
}
AMateria::AMateria(const AMateria& src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
    return ;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called." << std::endl;
    return ;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    
    return (*this);
}

AMateria::AMateria(std::string const& type)
{
    this->type = type;
    return ;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria shoots an ice bolt at " << target.getName() << std::endl;
    return ;
}

std::string const& AMateria::getType() const
{
    return (this->type);
}
