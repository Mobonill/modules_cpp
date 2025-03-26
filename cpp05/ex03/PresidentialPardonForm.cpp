/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:54:11 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/18 16:50:07 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PPF", 25, 5), _target("Prostetnic Vogon Jeltz") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PPF", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PPF", 25, 5), _target(other._target) {

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
		throw std::runtime_error("Please sign this  Presidential form before execution");
	}
		if (employee.getGrade() > 5)
			throw GradeTooLowException();
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;

	return;
}