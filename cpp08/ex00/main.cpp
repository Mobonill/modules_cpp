/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:24:01 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/23 19:42:01 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

	std::vector<int> tab_int;

	tab_int.push_back(0);
	tab_int.push_back(1);
	tab_int.push_back(2);
	tab_int.push_back(3);
	tab_int.push_back(4);
	tab_int.push_back(5);

	easyfind(tab_int, 3);

	return 0;

}