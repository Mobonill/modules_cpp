/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:35:54 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 19:02:40 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Mysterious Form"), _isSigned(false), _signGrade(50), _execGrade(100) {
    
}

Form::Form(std::string name, int sign, int exec): _name(name), _signGrade(sign), _execGrade(exec) {
    _isSigned = false;
} 

Form::Form(const Form& other): _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade) {
    this->_isSigned = other._isSigned;
}

Form::~Form() {
    
}

Form& Form::operator=(const Form& rhs) {
    
    if (this != &rhs) {
        this->_isSigned = rhs._isSigned;
    }
    std::cout << "Only signature status has been modified\n" << std::endl;
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

bool Form::getStatus() {
    return this->_isSigned;
}

int Form::getSignGrade() const{
    return this->_signGrade;
}

int Form::getExecGrade() const{
    return this->_execGrade;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high to execute this form\n";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade requiered is too low to sign this form\n";
}

std::ostream& operator<<(std::ostream& os, const Form& rhs){
    os << "Form " << rhs.getName() << " can be signed by grade " << rhs.getSignGrade() << " and executed by grade " << rhs.getExecGrade() << std::endl;
    return (os);
}

void Form::beSigned(Bureaucrat employee){

    if (_isSigned == true) {
        std:: cout << "This form has already be signed, please execute it." << std::endl;
        return;
    }
    try {
        if (employee.getGrade() > this->getSignGrade())
            throw GradeTooLowException();
        _isSigned = true; 
        std::cout << "Form is signed" << std::endl;
    }
    catch (const GradeTooLowException& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
}

void Form::beExecuted(Bureaucrat employee) {
    
    if (_isSigned == false){
        std::cout << "Please sign this form before execution" << std::endl;
        return;
    }
    try {
        if (employee.getGrade() < this->_execGrade)
            throw GradeTooHighException();
        std::cout << "Form will be executed" << std::endl;
    }
    catch (const GradeTooHighException& ex) {
        std::cerr << "Its's not your job, you have to delegate !" << ex.what() << std::endl; 
    }
}
