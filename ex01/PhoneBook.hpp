/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:07:55 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 12:28:56 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdlib.h>
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		void addNewContact(void);
		void contactsRegistered(void);
		std::string setContactFormat(std::string info); 
		void searchContact(int i);

	private:
		Contact contact[9];
		int index;
};
