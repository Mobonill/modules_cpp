/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:17:41 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 19:52:20 by mobonill         ###   ########.fr       */
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
		void makeSound(void);

};
