/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:02:26 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/23 19:47:32 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <typename T>
void easyfind(T& vect, int n) {
	
	typename T::iterator it;

	it = find(vect.begin(), vect.end(), n);
	if (it != vect.end())
		std::cout << "Element found in vector: " << *it << std::endl;
	else
		std::cout << "Element not found in vector" << std::endl;
	return ;
}

