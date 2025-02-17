/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:02:27 by morgane           #+#    #+#             */
/*   Updated: 2025/02/17 21:07:32 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <string>

int main(int ac, char **av) {

    int i;
    int j;

    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    while (i < ac)
    {
        j = 0;
        while(ac[i][j])
        {
            std::cout << (char)toupper(ac[i][j]);
            j++;
        }
        i++;
        if (i)
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}