/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:34:10 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 19:55:40 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other);
		void setType(std::string type);
		std::string getType(void);
		void makeSound(void);

	protected:
		std::string _type;

};
