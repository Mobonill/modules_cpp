/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:34:11 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 19:18:08 by mobonill         ###   ########.fr       */
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
		std::string getType(void);
		void makeSound(void);

	protected:
		std::string _type;

};
