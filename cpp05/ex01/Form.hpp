/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:12:11 by morgane           #+#    #+#             */
/*   Updated: 2025/03/14 18:58:04 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"

class Form {

    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _execGrade;

    public:
        Form();
        Form(const Form& other);
        Form(std::string name, int sign, int exec);
        ~Form();
        Form& operator=(const Form& rhs);
        std::string getName() const;
        bool getStatus();
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat employee);
        void beExecuted(Bureaucrat employee);

       
        class GradeTooHighException: public std::exception {
            public :
                const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw();  
        };
 
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);



