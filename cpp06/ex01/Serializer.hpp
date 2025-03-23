/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:18:43 by morgane           #+#    #+#             */
/*   Updated: 2025/03/19 18:01:19 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>


typedef struct s_Data {
    
    int cat;
} Data ;

class Serializer {

	private:
		Serializer();
		Serializer(const Serializer &other);
		~Serializer();
		Serializer &operator=(const Serializer &rhs);

	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};
