/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:06:23 by morgane           #+#    #+#             */
/*   Updated: 2025/03/29 15:40:08 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1) {
		_grade = 1;
		std::cout << "Grade is too high, so Bureaucrate has been greated with maximum grade 1.\n";
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		_grade = 150;
		std::cout << "Grade is too low, so Bureaucrate has been greated with minimum grade 150.\n";
		throw GradeTooLowException();
	}
	else
		_grade = grade;
} 

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat copied.\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destroyed.\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1) {
		throw GradeTooHighException();
		_grade--;
		std::cout << "Grade incremented. Actual grade: " << _grade << std::endl;
	}
	
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150) {
		throw GradeTooLowException();
		_grade++;
		std::cout << "Grade decremented. Actual grade: " << _grade << std::endl;
	}
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high : Highest grade is 1\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low: Loowest grade is 150\n";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}
