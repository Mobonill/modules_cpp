/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:26:16 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 13:05:45 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// CONSTRUCTOR AND DESTRUCTOR

Contact::Contact(void) : _index(0){
    
}

Contact::~Contact(void){
    
}

// SETTERS AND GETTERS

void Contact::setFirstName(std::string info){
    
    while (info.empty()) {
        std::cout << "Field can not be empty, please enter a fisrt name: ";
            std::getline(std::cin, info);
    }
    this->_firstName = info;
    return;
}

void Contact::setLastName(std::string info){

    while (info.empty()) {
        std::cout << "Field can not be empty, please enter a last name: ";
        std::getline(std::cin, info);
    }
    this->_lastName = info;
    return;
}

void Contact::setNickName(std::string info){

    while (info.empty()) {
        std::cout << "Field can not be empty, please enter a nickname: ";
        std::getline(std::cin, info);
    }
    this->_nickName = info;
    return;    
}

void Contact::setPhoneNumber(std::string info){

    while (info.empty()) {
        std::cout << "Field can not be empty, please enter a phone number: ";
        std::getline(std::cin, info);
    }
    this->_phoneNumber = info;
    return;
}

void Contact::setDarkestSecret(std::string info){

    while (info.empty()) {
        std::cout << "Field can not be empty, please enter your darkest secret: ";
        std::getline(std::cin, info);
    }
    this->_darkestSecret = info;
    return;
}

void Contact::setIndex(int i) {
    
    this->_index = i;
}

std::string Contact::getFirstName(){

    return this->_firstName;
}

std::string Contact::getLastName(){

    return this->_lastName;
}

std::string Contact::getNickName(){

    return this->_nickName;
}

std::string Contact::getPhoneNumber(){

    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(){

    return this->_darkestSecret;
}

int Contact::getIndex(){
    
    return this->_index;
}

void Contact::setContact(void){

    std::string info;

    std::cout << "First Name: ";
    std::getline(std::cin, info);
    setFirstName(info);
    std::cout << "Last Name: ";
    std::getline(std::cin, info);
    setLastName(info);
    std::cout << "Nickname: ";
    std::getline(std::cin, info);
    setNickName(info);
    std::cout << "Phone Number: ";
    std::getline(std::cin, info);
    setPhoneNumber(info);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, info);
    setDarkestSecret(info);
    return;
}
