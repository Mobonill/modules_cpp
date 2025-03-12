/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:35:10 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 20:18:16 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"


class Ice : public AMateria {
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& rhs);
		Ice& operator=(const Ice& rhs);
		void setType(std::string type);
		std::string getType(void) const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
			
	private:
		std::string	_type;
};