/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:21:49 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/29 16:54:03 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {

	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void setTarget(const std::string& target);
		std::string getTarget(void) const;
		RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
		void execute(const Bureaucrat &employee) const;

};