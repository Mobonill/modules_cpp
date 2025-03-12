/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:34:11 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:49:21 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {

	public:
		Animal();
		Animal(const Animal& other);
		Animal(std::string type);
		virtual ~Animal();
		Animal& operator=(const Animal& other);
		void setType(std::string type);
		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string _type;

};
