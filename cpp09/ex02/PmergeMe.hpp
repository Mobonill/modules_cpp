/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:33:20 by morgane           #+#    #+#             */
/*   Updated: 2025/04/08 18:28:40 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <utility>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <ctime>


class PmergeMe {
    
    private:
        std::vector<std::pair<int, int> > _x;
        std::vector<int> _xMax;
        std::vector<int> _xMin;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& copy);
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& rhs);
        void parsingInput(int argc, char **argv);
        void pairingVector(int argc, char **argv);
        void defineMinAndMax(void);
        void recursiveSorting(void);
        void insertMinValue(void);
        void dichotomyInsertinSorts(void);
        void launchProgram(int argc, char **argv);

    
};