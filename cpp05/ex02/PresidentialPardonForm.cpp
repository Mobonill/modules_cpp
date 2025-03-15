/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:54:11 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/15 19:14:06 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PP Form", 25, 5), _target("Prostetnic Vogon Jeltz") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PP Form", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PP Form", 25, 5), _target(other._target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{

	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat& employee) const {
	
	if (this->getStatus() == false)
	{
		std::cerr << "Presidential form has be be signed before execution" << std::endl;
		return;
	}
	try
	{
		if (employee.getGrade() > 5)
			throw GradeTooLowException();
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch (const GradeTooLowException &ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}

	return;
}