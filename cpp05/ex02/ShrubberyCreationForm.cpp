/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:14:03 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 21:13:11 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation", 145, 137), _target(target + "_shrubbery") {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
    
    if (this != &rhs){
        this->_target = rhs._target;
    }
    return (*this);
}


void ShrubberyCreationForm::setName(std::string name) {
    this->_target = name + "_shrubbery";
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {

    if (this->getStatus() == false) {
        std::cerr << "Shrubbery form has be be signed before execution" << std::endl;
    }
    try {
        if (executor.getGrade() > this->getExecGrade())
            throw GradeTooLowException();
    }
    catch (const GradeTooLowException& ex) {
            std::cerr << "Error: " << ex.what() << std::endl;
    }
    
    std::ofstream outfile(_target.c_str());
    if (outfile.is_open())
    {
        outfile << "       /\\      \n";
        outfile << "      /..\\     \n";
        outfile << "     /\\O\\*\\   \n";
        outfile << "    /./\\/\\ \\  \n";
        outfile << "   /\\*\\/\\*\\/\\ \n";
        outfile << "  /...........\\ \n";
        outfile << " /\\.\\/\\/./\\/O/\\\n";
        outfile << "       ||       \n";
        outfile << "       ||       \n";
        outfile << "       ||       \n";
        outfile.close();
        std::cout << "Shrubbery has been created at " << _target << std::endl;
    }
    else
        std::cerr << "Error: failed to open " << _target << std::endl; 
    return ;
}