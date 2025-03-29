/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:44:52 by morgane           #+#    #+#             */
/*   Updated: 2025/03/29 17:17:46 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {


	try {
		Bureaucrat b("b", 4);
		Bureaucrat a("a", 145);
		Form x("xFile", 100, 50);
		x.beSigned(a);
		x.beSigned(b);
		x.beExecuted(a);
		x.beExecuted(b);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what();
	}

	return 0;
}