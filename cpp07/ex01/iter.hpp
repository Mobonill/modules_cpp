/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:38:32 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/23 16:06:00 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

template <typename T>
void iter(T *tab, int length, void (*function)(T &)) {
	for (int i = 0; i < length; i++)
		function(tab[i]);
}