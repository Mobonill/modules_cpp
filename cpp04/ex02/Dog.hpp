/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:11:55 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 14:51:41 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

	public:
		Dog();
		Dog(const 
		Dog& other);
		Dog(std::string type);
		~Dog();
		Dog& operator=(const Dog& other);
		void setIdea(int index);
		std::string getIdea(int index) const;
		void makeSound(void) const;
	
	private:
		Brain* brain;
};
