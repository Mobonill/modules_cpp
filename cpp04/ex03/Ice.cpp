/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:40:05 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 20:18:38 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"


Ice::Ice() : AMateria()
{
    std::cout << "Ice constructor called." << std::endl;
    this->_type = "ice";
    return ;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called." << std::endl;
    return ;
}

Ice::Ice(const Ice& other) : AMateria()
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
    return ;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

std::string Ice::getType() const
{
    return (this->_type);
}

void    Ice::setType(std::string type)
{
    this->_type = type;
}

AMateria* Ice::clone() const
{
    AMateria* clone = new Ice();
    return (clone);
}

Ice& Ice::operator= (const Ice& rhs)
{
    std::cout << "Ice copy assignment called" << std::endl;
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
        this->_type = rhs.getType();
    }
    return (*this);
}