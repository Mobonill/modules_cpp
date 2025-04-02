/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:30:59 by mobonill          #+#    #+#             */
/*   Updated: 2025/04/02 15:59:23 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>

class RPN {

	private:
		template <class T, class Container = deque<T> > class stack;

	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();
		RPN operator=(const operator& rhs);

};