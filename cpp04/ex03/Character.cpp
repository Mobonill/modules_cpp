/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:04:50 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 22:21:49 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"


Character::Character() : _name("Unowned"), _droppedCount(0)
{
    std::cout << "Character constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(std::string name) : _droppedCount(0)
{
    std::cout << "Character constructor called." << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i])
            delete this->_inv[i];
    }
    for (int i = 0; i < _droppedCount; i++)
    {
        if (this->_dropped[i])
            delete this->_dropped[i];
    }
}


Character::Character(const Character& other): _droppedCount(0)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inv[i])
                delete this->_inv[i];
            if (rhs._inv[i])
                this->_inv[i] = rhs._inv[i]->clone();
            else
                this->_inv[i] = NULL;
        }
        _droppedCount = 0;
    }
    return (*this);
}


void	Character::setName(std::string name)
{
	this->_name = name;
}

std::string Character::getName(void)
{
	return (this->_name);
}


std::string const& Character::getName() const
{
	return this->_name;
}


void    Character::equip(AMateria* m)
{
	int i;

    i = 0;
    while (i < 4)
    {
        if (!this->_inv[i])
        {
            this->_inv[i] = m;
            return ;
        }
		i++;
    }
	delete m;
    return ;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_inv[idx])
    {
        if (_droppedCount < 100)
        {
            this->_dropped[_droppedCount++] = this->_inv[idx];
        }
        this->_inv[idx] = NULL;
    }
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_inv[idx])
			this->_inv[idx]->use(target);
	}
	return ;
}
