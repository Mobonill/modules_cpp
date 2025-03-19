/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:18:43 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 21:57:20 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>


typedef struct Data {
    
    int pokemons;
}

class Serializer {

    private:
        Serializer();
        Serializer(const Serializer& other);
        ~Serializer();
        Serializer& operator=(const Serializer& rhs);

    public:
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
}