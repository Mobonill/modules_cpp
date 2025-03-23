/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:42:07 by morgane           #+#    #+#             */
/*   Updated: 2025/03/23 18:19:51 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include <stdint.h>

template <typename T>
class Array {

	private:
		T *_array;
		int _size;

	public:
		Array() : _array(NULL), _size(0) {};
		~Array() {delete[] _array;};
		Array(unsigned int n): _array(new T[n]()), _size(n) {};
		Array(const Array<T> &copy) : _array(copy._array), _size(copy._size) {};
		Array<T> &operator=(const Array<T> &rhs);
		int size(void);
		T &operator[](int index);
		const T &operator[](int index) const;
		friend std::ostream &operator<<(std::ostream &os, const Array<T> &rhs);

};

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	if (this != &rhs)
	{
		delete[] _array;
		_size = rhs._size;
		if (_size > 0)
		{
			_array = new T[_size];
			for (int i = 0; i < _size; ++i)
				_array[i] = rhs._array[i];
		}
		else
			_array = NULL;
	}
	return (*this);
}

template <typename T>
int Array<T>::size(void) {
	return (this->_size);
}

template <typename T>
T &Array<T>::operator[](int index)
{
	if (_size == 0)
		throw std::out_of_range("Array is NULL");
	if (index < 0 || index >= _size)
		throw std::out_of_range("Index out of range!");
	return (_array[index]);
}

template <typename T>
const T &Array<T>::operator[](int index) const
{
	if (index < 0 || index >= _size)
		throw std::out_of_range("Index out of range !");
	return (_array[index]);
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &rhs) {

	for(int i = 0; i < rhs._size; i++){
		os << rhs._array[i];
	}
	return os;
}