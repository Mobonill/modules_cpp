/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:45 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/26 19:29:11 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {}

Bitcoin::Bitcoin(const Bitcoin& copy) {
	*this = copy;
}

Bitcoin::~Bitcoin() {}


void Bitcoin::downloadDataBase(char **argv) {
	
}