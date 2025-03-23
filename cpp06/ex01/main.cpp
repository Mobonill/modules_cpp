/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:09:53 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/19 18:18:19 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

	Data a;

	a.cat = 5;
	
	
	std::cout << "Adresse de a : " << &a << std::endl;
	std::cout << "Cat de a : " << a.cat << std::endl;
	uintptr_t ptr_a = Serializer::serialize(&a);
	std:: cout << "Serialize de A : ptr_a----> " << ptr_a << std::endl << std::endl;
	Data* b = Serializer::deserialize(ptr_a);
	std::cout << "Adresse de b " << &b  << std::endl;
	std::cout << "Cat de b = -->" << b->cat << std::endl;
	uintptr_t ptr_b = Serializer::serialize(b);
	std:: cout << "Serialize de B : ptr_b----> " << ptr_b << std::endl;

	return 0;
}