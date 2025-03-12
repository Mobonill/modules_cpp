/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:58:04 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:49:31 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain {

	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain& operator=(const Brain& other);
	
	private :
		std::string ideas[100];
};