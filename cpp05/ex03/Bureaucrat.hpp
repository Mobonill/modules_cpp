/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:07:57 by morgane           #+#    #+#             */
/*   Updated: 2025/03/17 14:49:35 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <string>
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &rhs);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void executeForm(const AForm& form) const;

		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);
