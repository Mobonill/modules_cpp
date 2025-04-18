/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:35:54 by morgane           #+#    #+#             */
/*   Updated: 2025/03/29 15:54:51 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Mysterious Form"), _isSigned(false), _signGrade(50), _execGrade(100)
{
}

Form::Form(std::string name, int sign, int exec) : _name(name), _signGrade(sign), _execGrade(exec)
{
	_isSigned = false;
}

Form::Form(const Form &other) : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
	this->_isSigned = other._isSigned;
}

Form::~Form()
{
}

Form &Form::operator=(const Form &rhs)
{

	if (this != &rhs) {
		this->_isSigned = rhs._isSigned;
		std::cout << "Only signature status has been modified" << std::endl;
	}
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getStatus()
{
	return this->_isSigned;
}

int Form::getSignGrade() const
{
	return this->_signGrade;
}

int Form::getExecGrade() const
{
	return this->_execGrade;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade requiered is too low\n";
}

std::ostream &operator<<(std::ostream &os, const Form &rhs)
{
	os << "Form " << rhs.getName() << " can be signed by grade " << rhs.getSignGrade() << " and executed by grade " << rhs.getExecGrade() << std::endl;
	return (os);
}

void Form::beSigned(Bureaucrat employee)
{

	if (_isSigned == true)
	{
		std::cout << "This form has already be signed, please execute it." << std::endl;
		return;
	}
	if (employee.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	_isSigned = true;
	std::cout << "Form is signed" << std::endl;
}

void Form::beExecuted(Bureaucrat employee)
{

	if (_isSigned == false)
	{
		std::cout << "Please sign this form before execution" << std::endl;
		return;
	}
	if (employee.getGrade() > this->_execGrade)
		throw GradeTooLowException();
	std::cout << "Form will be executed" << std::endl;
}
