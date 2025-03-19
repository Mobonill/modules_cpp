/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:52:49 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 21:31:49 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>

class ScalarConverter {

    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter& rhs);
    
    public:
        static void convert(std::string literal);
        
};