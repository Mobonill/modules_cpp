/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:06:23 by morgane           #+#    #+#             */
/*   Updated: 2025/03/15 19:31:58 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	}
	catch (const GradeTooHighException &except)
	{
		std::cerr << "Exception in constructor: " << except.what();
		_grade = 1;
	}
	catch (const GradeTooLowException &except)
	{
		std::cerr << "Exception in constructor: " << except.what();
		_grade = 150;
	}
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
	try // L'instruction throw GradeTooHighException(); crée un objet temporaire de type GradeTooHighException
	{
		if (_grade - 1 < 1)
			throw GradeTooHighException();
		_grade--;
		std::cout << "Grade incremented. Actual grade: " << _grade << std::endl;
	}
	catch (const GradeTooHighException &except) // Cet objet temporaire est référencé par la variable except dans catch
	{
		std::cerr << "Error: " << except.what() << std::endl;
	} // L’objet temporaire contenant la méthode what() est appelé via except, ce qui affiche son message.
}

void Bureaucrat::decrementGrade()
{

	try
	{
		if (_grade + 1 > 150)
			throw GradeTooLowException();
		_grade++;
		std::cout << "Grade decremented. Actual grade: " << _grade << std::endl;
	}
	catch (const GradeTooLowException &except)
	{
		std::cerr << "Error: " << except.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high : Highest grade is 1\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low: Loowest grade is 150\n";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}

void Bureaucrat::executeForm(AForm const& form) {

	if (form.execute(Bureaucrat)
}
