/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:16:51 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/01 23:47:42 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv) {

	(void)argv;
	(void)argc;
	// if (argc != 3) {
	// 	std::cerr << "Error: Three arguments required" << std::endl;
	// 	return 1;
	// }
	try {
		
        Bitcoin btc;
        btc.downloadDataBase(argv);

        // std::cout << "\n -----  DATA BASE ------" << std::endl;
        // btc.printData();


        std::cout << "\n ------- LOOKING FOR A DATE ------" << std::endl;
        std::string date = "2010-11-08";
        float value = btc.getValueByDate(date);
		float exchange = btc.parseDataBaseToCheck(argv, date);
		if (exchange == -1) {
			btc.
		}
		else
        	std::cout << date << " => " << value << " = " << exchange * value << std::endl;

    }
	catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
	
	return 0;
}