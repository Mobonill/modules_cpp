/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:35:32 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:04:23 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:
		WrongCat();
		WrongCat(const 
		WrongCat& other);
		WrongCat(std::string type);
		~WrongCat();
		WrongCat& operator=(const WrongCat& other);
		void makeSound() const;

};
