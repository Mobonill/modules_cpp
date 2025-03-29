/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:45 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/29 17:29:01 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {}

Bitcoin::Bitcoin(const Bitcoin& copy) {
	*this = copy;
}

Bitcoin::~Bitcoin() {}


void Bitcoin::downloadDataBase(char **argv) {
	
	std::ifstream infile(argv[1]);
	if (!infile) {
		std::cerr << "Error: input is invalid or empty\n";
		return (1);
	}
	
}