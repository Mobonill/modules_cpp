/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:11:55 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:00:59 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public Animal {

	public:
		Dog();
		Dog(const 
		Dog& other);
		Dog(std::string type);
		~Dog();
		Dog& operator=(const Dog& other);
		void makeSound(void) const;

};
