/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:14:03 by morgane           #+#    #+#             */
/*   Updated: 2025/03/29 16:53:54 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubby form", 145, 137), _target("targForm_shrubbery") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubby form", 145, 137), _target(target + "_shrubbery") {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("Shrubby form", 145, 137), _target(other._target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{

	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void ShrubberyCreationForm::setTarget(const std::string& target)
{
	this->_target = target + "_shrubbery";
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &employee) const {

	if (this->getStatus() == false)
	{
		throw std::runtime_error("Please sign this Shrubbery form before execution");
		return;
	}
	if (employee.getGrade() > 137)
		throw GradeTooLowException();
	std::ofstream outfile(_target.c_str());
	if (outfile.is_open())
	{
		outfile << "       /\\                   /\\      \n";
		outfile << "      /..\\                 /..\\     \n";
		outfile << "     /\\O\\*\\               /\\O\\*\\   \n";
		outfile << "    /./\\/\\ \\             /./\\/\\ \\  \n";
		outfile << "   /\\*\\/\\*\\/\\           /\\*\\/\\*\\/\\ \n";
		outfile << "  /..........\\         /..........\\ \n";
		outfile << " /\\.\\/\\/./\\/O/\\       /\\.\\/\\/./\\/O/\\\n";
		outfile << "       ||                   ||       \n";
		outfile << "       ||                   ||       \n";
		outfile << "       ||                   ||        \n";
		outfile.close();
		std::cout << "Shrubbery has been created at " << _target << std::endl;
	}
	else
		std::cerr << "Error: failed to open " << _target << std::endl;
	return;
}