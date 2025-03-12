/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:34:10 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:11:30 by morgane          ###   ########.fr       */
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
		void makeSound(void) const;

	protected:
		std::string _type;

};
