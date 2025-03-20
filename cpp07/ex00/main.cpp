/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:58:13 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/20 15:27:41 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main () {

	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	
	return 0;
}


/* Implémentez les templates de fonctions suivants :

swap : Permute les valeurs des deux arguments donnés. Ne retourne rien.
min : Compare les deux valeurs passées en argument et retourne la plus petite. Si les deux sont égales, elle retourne la seconde.
max : Compare les deux valeurs passées en argument et retourne la plus grande. Si les deux sont égales, elle retourne la seconde.
Ces fonctions doivent pouvoir être appelées avec n'importe quel type d'argument. La seule exigence est que les deux arguments doivent être du même type et doivent prendre en charge tous les opérateurs de comparaison.

Les templates doivent être définis dans les fichiers d'en-tête. */
