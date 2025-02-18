/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:26:24 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 13:45:07 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	isIndexValid(std::string command) {
	
	if (command.size() > 1 || command.size() < 1) {
		
		std::cout << "Error: index not found" << std::endl;
		return (false);
	}
	if (isdigit(command[0]) == false) {
		int n = atoi(command.c_str());
		std::cout << "Error: only numbers are allowed" << std::endl;
		return (false);
	}
	if (atoi(command.c_str()) > 7){
		
		std::cout << "Error: index not found" << std::endl;
		return (false);
	}
	return (true);
}

int main(int ac, char **av)
{

	(void)ac;
	(void)av;
	PhoneBook phonebook;
	std::string command;
	static int i;

	i = 0;
	while (1)
	{
		std::cout << "Please, choose one command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout << "Have a nice day !" << std::endl;
			break;
		}
		else if (command == "ADD")
		{
			i = (i + 1) % 8;
			phonebook.addNewContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.contactsRegistered();
			std::cout << "If you want more informations about a contact, please select his index: ";
			std::getline(std::cin, command);
			if (isIndexValid(command) == true) {
				phonebook.searchContact(atoi(command.c_str()));
			}
		}
		else
			std::cout << "Error : Only ADD, SEARCH and EXIT can be used" << std::endl;
	}
	return 0;
}
