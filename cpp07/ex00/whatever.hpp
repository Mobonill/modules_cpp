/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:57:24 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/20 15:31:07 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


template <typename T>
void swap(T& a, T&b) {
	T c(a);
	a = b;
	b = c;
}

template <typename T>
T min(T& a, T& b) {

	return ((a > b) ? b : a);
}

template <typename T>
T max(T&a, T&b) {

	return ((a > b) ? a : b);
}

