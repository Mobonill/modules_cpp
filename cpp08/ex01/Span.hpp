/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:49:14 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/23 20:16:07 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

class Span {

	private:
		std::vector<int> _stock;
		unsigned int N;

	public:
		Span();
		Span(const Span& copy);
		~Span();
		Span& operator=(const Span& rhs);

	
}