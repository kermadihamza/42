/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:33:52 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:33:54 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


//		CON/DESTRUCTORS

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Schrubbery", 25, 5), _target("Robotomy")	{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5), _target(target)	{
}

PresidentialPardonForm::~PresidentialPardonForm(void)	{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : _target(copy._target)	{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)	{
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}


//		MEMBER FUNCTIONS

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!checkExecution(executor))
		return false;
	std::cout << _target << " has been pardonned by its Majesty Zaphod Beeblebrox." << std::endl;
	return true;
}
