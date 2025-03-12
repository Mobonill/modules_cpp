/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:00:54 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 22:22:50 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
    std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* other)
{
	if (!other)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = other;
			return ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const& other)
{
	if (other == "ice")
		return new Ice();
	else if (other == "cure")
		return new Cure();
    else
	    return NULL;

}