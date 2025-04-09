/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:40:36 by morgane           #+#    #+#             */
/*   Updated: 2025/04/08 18:44:41 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _x() {};

PmergeMe::~PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe& copy): _x(copy._x) {};

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
    
    if (this != &rhs) {
        this->_x = rhs._x;
    }
    return (*this);
}

void PmergeMe::launchProgram(int argc, char **argv) {
     
    try {
        parsingInput(argc, argv);
        pairingVector(argc, argv);
        defineMinAndMax();
        recursiveSorting();
        insertMinValue();
        dichotomyInsertinSorts();
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

bool isValidNumber(const char* str) {
    
    int i = 0;
    
    if (!str || str[0] == '\0')
        return false;
    while (str[i]) {
        if (!std::isdigit(str[i]))
            return false;
        ++i;
    }
    return true;
}


void PmergeMe::parsingInput(int argc, char **argv) {
    
    for (int i = 1; i < argc; i++) {
        if (!isValidNumber(argv[i]))
            throw std::invalid_argument("Error: only digits are accepted");

        long value = std::atol(argv[i]);
        if (value > INT_MAX)
            throw std::out_of_range("Error: number too large");
        if (value < 0 || value > INT_MAX)
            throw std::out_of_range("Error: negative number detected");
    }

    return ;
}

void PmergeMe::pairingVector(int argc, char **argv) {

    int i = 1;

    std::cout << "Before: ";
    for (; i + 1 < argc; i += 2) {
        int a = std::atoi(argv[i]);
        int b = std::atoi(argv[i + 1]);
        
        _x.push_back(std::make_pair(a, b));
        std::cout << a << " " << b << " ";
    }
    if ((argc - 1) % 2 != 0) {
        int last = std::atoi(argv[i]);
        
        _xMin.push_back(last);
        std::cout << last;
    }
    std::cout << std::endl;

    return;
}

void PmergeMe::defineMinAndMax() {
    
    for(long unsigned int i = 0; i < _x.size() ; i++) {
        if (_x[i].first > _x[i].second) {
            _xMax.push_back(_x[i].first);
            if (_x[i].second != -1) {
                _xMin.push_back(_x[i].second);
            }
        }
        else {
            _xMax.push_back(_x[i].second);
                if (_x[i].first!= -1) {
                    _xMin.push_back(_x[i].first);
                }
        }
    }

    return ;
}

void PmergeMe::recursiveSorting() {

    bool sorted = false;
    for (long unsigned int i = 0; i < _xMax.size() - 1; i++) {
        if (_xMax[i] > _xMax[i + 1]) {
            std::swap(_xMax[i], _xMax[i + 1]);
            sorted = true;
        }
    }
    if (sorted == true)
        recursiveSorting();

    // std::cout << "\n MAX after recursive sorting:  ";
    // for (long unsigned int i = 0; i < _xMax.size(); i++)
    //     std::cout << _xMax[i] << " ";

    // std::cout << "\n MIN :  ";
    // for (long unsigned int i = 0; i < _xMin.size(); i++)
    //     std::cout << _xMin[i] << " ";
    
    return;
}

void PmergeMe::insertMinValue() {
    
    int *tmp = &_xMin[0];
    
    for(long unsigned int i = 0; i <_xMin.size(); i++) {
        if(*tmp > _xMin[i]) {
            tmp = &_xMin[i];
        }
    }
    
    _xMax.insert(_xMax.begin(), *tmp);
    std::vector<int>::iterator it = _xMin.begin() + (tmp - &_xMin[0]); // Crée un itérateur qui pointe sur l'indice de mon élément le plus petit;
    _xMin.erase(it);
    
    // std::cout << "\n MAX with min elem:  ";
    // for (long unsigned int i = 0; i < _xMax.size(); i++)
    //     std::cout << _xMax[i] << " ";

    // std::cout << "\n MIN withou min elem:  ";
    // for (long unsigned int i = 0; i < _xMin.size(); i++)
    //     std::cout << _xMin[i] << " ";

    return ;
}

void PmergeMe::dichotomyInsertinSorts() {

    for (long unsigned int i = 0; i < _xMin.size(); i++)
    {
        int left = 0;
        int right = _xMax.size() - 1;
        bool equal = false;
        int middle;
        
        while (left <= right)
        {
            middle = (left + right) / 2;

            if (_xMin[i] == _xMax[middle])
            {
                _xMax.insert(_xMax.begin() + middle, _xMin[i]);
                equal = true;
                break;
            }
            else if (_xMin[i] < _xMax[middle])
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
            }
        }
        if (equal == false)
            _xMax.insert(_xMax.begin() + left, _xMin[i]);
        
    }

    // std::cout << "\n MIN after dicho:  ";
    // for (long unsigned int i = 0; i < _xMin.size(); i++)
    //     std::cout << _xMin[i] << " ";

    std::cout << "\n After:  ";
    for (long unsigned int i = 0; i < _xMax.size(); i++) {
        std::cout << _xMax[i] << " ";
    }
    
    return ;
}
