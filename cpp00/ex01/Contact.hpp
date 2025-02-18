/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:26:07 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 11:54:06 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdlib.h>
#include <iostream>
#include <string>

class Contact{

	public:
		Contact();
		~Contact();
		void setFirstName(std::string info);
		void setLastName(std::string info);
		void setNickName(std::string info);
		void setPhoneNumber(std::string info);
		void setDarkestSecret(std::string info);
		void setIndex(int i);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
		int getIndex(void);
		void setContact(void);

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int _index;

};

