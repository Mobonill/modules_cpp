/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:43:39 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 20:19:12 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria()
{
    std::cout << "Cure constructor called." << std::endl;
    this->_type = "cure";
    return ;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called." << std::endl;
    return ;
}

Cure::Cure(const Cure& other) : AMateria()
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
    return ;
}

AMateria* Cure::clone() const
{
    AMateria* clone = new Cure();
    return (clone);
}


Cure& Cure::operator=(const Cure& rhs)
{
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
        this->_type = rhs.getType();
    }
    return (*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


std::string Cure::getType() const
{
    return (this->_type);
}

void    Cure::setType(std::string ttype)
{
    this->_type = ttype;
}