/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:59:14 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/25 17:53:23 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <string>
#include <queue>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:
		MutantStack() {}
		MutantStack(const MutantStack &other) : std::stack<T>(other) {}
		~MutantStack() {}
		MutantStack &operator=(const MutantStack &other);
		typedef typename std::deque<T>::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	if (this != &rhs)
	{
		std::stack<T>::operator=(rhs);
	}
	return *this;
}