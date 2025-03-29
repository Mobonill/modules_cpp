/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:53:27 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/29 16:54:19 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void setTarget(const std::string& target);
		std::string getTarget(void) const;
		PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
		void execute(const Bureaucrat& employee) const;

};