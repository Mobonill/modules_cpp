/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:25:42 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/18 16:49:52 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(): AForm("RRF", 72, 45), _target("Target x") {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm("RRF", 72, 45), _target(other._target) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RRF", 72, 45), _target(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){

	if (this != &rhs) 
		this->_target = rhs._target;
	return(*this);
}

void RobotomyRequestForm::setTarget(std::string target) {
	this->_target = target;
}

std::string RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat& employee) const {

	if (this->getStatus() == false) {
		throw std::runtime_error("Please sign this Robotomy form before execution");
		return;
	}
	if (employee.getGrade() > 45) {
		throw GradeTooLowException();
		return;
	}

	std::srand(std::time(NULL));
	std::cout << "*Drrr ddrrrrrr*" << std::endl;
	if (std::rand() % 2 == 0) 
		std::cout << "Success: " << _target << " has been robotomized !" << std::endl;
	else
		std::cout << "Failure: Robotomization of " << _target << " failed" << std::endl;

	return ;
}
