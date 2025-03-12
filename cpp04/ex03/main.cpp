/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:04:08 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 22:24:36 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

int main()

{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    std::cout << std::endl << std::endl;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    std::cout << std::endl << std::endl;

    me->equip(tmp);
    me->unequip(2);
    me->unequip(2);
    me->unequip(1);
    me->unequip(0);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << std::endl << std::endl;

    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}
