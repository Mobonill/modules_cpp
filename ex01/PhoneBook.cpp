/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:07:43 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 13:29:52 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0){
    
}

PhoneBook::~PhoneBook(){
    
}


void PhoneBook::addNewContact()
{
    contact[index].setContact();
    contact[index].setIndex(index);
    index = (index + 1) % 8;
}
std::string PhoneBook::setContactFormat(std::string info) {
    
    if (info.size() > 10) {
       
        info.resize(9);
        info += ".";
    }
    else if (info.size() < 10) {
        
        while(info.size() < 10) {
            info += " ";
        }
    }
    return (info);
}

void PhoneBook::contactsRegistered() {

    int i;
    int num;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    i = 0;
    std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
    while (i < 8)
    {
        num = contact[i].getIndex();
        firstName = contact[i].getFirstName();
        lastName = contact[i].getLastName();
        nickName = contact[i].getNickName();
        phoneNumber = contact[i].getPhoneNumber();
        darkestSecret = contact[i].getDarkestSecret();
        std::cout << num << "         |";
        std::cout << setContactFormat(firstName) << "|";
        std::cout << setContactFormat(lastName) << "|";
        std::cout << setContactFormat(nickName) << std::endl;
        i++;
    }
    return ;
}

void    PhoneBook::searchContact(int i)
{
    std::cout << "First name: " << contact[i].getFirstName() << std::endl;
    std::cout << "Last Name: " << contact[i].getLastName() << std::endl;
    std::cout << "Nickname: " << contact[i].getNickName() << std::endl;
    std::cout << "Phone Number: " << contact[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact[i].getDarkestSecret() << std::endl;
    return ;
}