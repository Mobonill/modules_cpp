/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:42:07 by morgane           #+#    #+#             */
/*   Updated: 2025/03/22 19:29:20 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include <stdint.h>

template <typename T>
class Array {

    private:
    T* _array;
    int _size;

    public:
    Array(): _array(NULL), _size(0) {};
    ~Array() {};
    Array(unsigned int n) _array(new T[n]()), _size(n) {};
    Array(const Array<T>& copy): _array(copy._array), _size(copy._size) {};
    Array<T>& operator=(const Array<T>& rhs) {};
    
};

