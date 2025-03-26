/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:12:11 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 18:58:04 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat;

class AForm
{

	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;

	public:
		AForm();
		AForm(const AForm &other);
		AForm(std::string name, int sign, int exec);
		virtual ~AForm();
		AForm &operator=(const AForm &rhs);
		std::string getName() const;
		void setSignStatus(int sign);
		bool getStatus() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& employee);
		virtual void execute(const Bureaucrat& employee) const = 0;

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

std::ostream& operator<<(std::ostream& os, const AForm& rhs);



