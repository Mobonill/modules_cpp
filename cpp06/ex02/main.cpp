/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:47:11 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/19 19:12:58 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

int main()
{


	Base* a;
	a = generate();
	identify(a);

	Base *b;
	
	b = generate();
	identify(*b);

	return (0);
}