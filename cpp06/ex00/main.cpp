/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:10:38 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 21:16:49 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.cpp"

int main(int ac, char **av) {

    if (ac != 2)
        return 0;
    ScalarConverter a;
    
    a.convert(av[1]);
    
    return 0;
}