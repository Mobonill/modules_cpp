/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:56:10 by morgane           #+#    #+#             */
/*   Updated: 2025/03/15 16:19:37 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp" 

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria &other);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &rhs);
		AMateria(std::string const &type);
		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string type;
};