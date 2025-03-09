/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:58:04 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 20:20:17 by mobonill         ###   ########.fr       */
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
		std::string getIdea(int index) const;
		void setIdea(int index, const std::string &idea);
	
	private :
		std::string ideas[100];
};