/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:35:54 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 19:02:40 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Mysterious AForm"), _isSigned(false), _signGrade(50), _execGrade(100) {
    
}

AForm::AForm(std::string name, int sign, int exec): _name(name), _signGrade(sign), _execGrade(exec) {
    _isSigned = false;
} 

AForm::AForm(const AForm& other): _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade) {
    this->_isSigned = other._isSigned;
}

AForm::~AForm() {
    
}

AForm& AForm::operator=(const AForm& rhs) {
    
    if (this != &rhs) {
        this->_isSigned = rhs._isSigned;
    }
    std::cout << "Only signature status has been modified\n" << std::endl;
    return *this;
}

std::string AForm::getName() const {
    return this->_name;
}

bool AForm::getStatus() const{
    return this->_isSigned;
}

int AForm::getSignGrade() const{
    return this->_signGrade;
}

int AForm::getExecGrade() const{
    return this->_execGrade;
}


const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high to execute this Aform\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade requiered is too low to sign this Aform\n";
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs){
    os << "AForm " << rhs.getName() << " can be signed by grade " << rhs.getSignGrade() << " and executed by grade " << rhs.getExecGrade() << std::endl;
    return (os);
}

void AForm::beSigned(const Bureaucrat& employee){

    if (_isSigned == true) {
        std:: cout << "This Aform has already be signed, please execute it." << std::endl;
        return;
    }
    try {
        if (employee.getGrade() > this->getSignGrade())
            throw GradeTooLowException();
        _isSigned = true; 
        std::cout << "AForm is signed" << std::endl;
    }
    catch (const GradeTooLowException& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
}

void AForm::execute(const Bureaucrat& employee) const{
    
    if (_isSigned == false){
        std::cout << "Please sign this Aform before execution" << std::endl;
        return;
    }
    try {
        if (employee.getGrade() < this->_execGrade)
            throw GradeTooHighException();
        std::cout << "AForm will be executed" << std::endl;
    }
    catch (const GradeTooHighException& ex) {
        std::cerr << "Its's not your job, you have to delegate !" << ex.what() << std::endl; 
    }
}
