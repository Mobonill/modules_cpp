/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:02:21 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 20:45:05 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "Brain has been created" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = "Empty Idea";
}

Brain::Brain(const Brain &other) {

	std::cout << "Brain has been copied" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
}

Brain::~Brain() {

	std::cout << "Brain has been destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {

	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const {

	if (index < 0 || index >= 100)
	{
		std::cerr << "Invalid index!" << std::endl;
		return "";
	}
	return ideas[index];
}

void Brain::setIdea(int index, const std::string &idea) {

	if (index < 0 || index >= 100)
	{
		std::cerr << "Invalid index!" << std::endl;
		return;
	}
	ideas[index] = idea;
}