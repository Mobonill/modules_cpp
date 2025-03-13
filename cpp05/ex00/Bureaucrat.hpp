/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:20:34 by morgane           #+#    #+#             */
/*   Updated: 2025/03/13 10:26:13 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Bureaucrat {

    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat(std::string name);
        ~Bureaucrat();
        
        void setName(std::string name);
        void setGrade(size_t grade);
        std::string getName(void);
        size_t getGrade(void);
        
    protected:
        std::string _name;
        size_t _grade;
        
    
};