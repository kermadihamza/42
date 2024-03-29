/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:40:07 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:55:08 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("presidential", 25, 5), target("home")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string t): Form("presidential", 25, 5), target(t)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : target(src.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	Form::operator=(rhs);
	target = rhs.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
	checkForm(executor);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};
