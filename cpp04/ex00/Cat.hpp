/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:17:41 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:00:45 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal {

	public:
		Cat();
		Cat(const 
		Cat& other);
		Cat(std::string type);
		~Cat();
		Cat& operator=(const Cat& other);
		void makeSound(void) const;

};
