/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:51 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/07 19:32:02 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Error: Two arguments required" << std::endl;
		return 1;
	}
		try {
			Bitcoin btc;
	
			btc.downloadDataBase();
			btc.parseDataBaseToCheck(argv);
	
			return 0;
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
			return 1;
		}
		// data csv empty seg fault
		// chmod 000 seg fault
		// Mois / jour pqs good
	return 0;
}