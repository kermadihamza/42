/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:34:07 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:34:09 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


//		CON/DESTRUCTORS

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy", 72, 45), _target("Robotomy")	{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target)	{
}

RobotomyRequestForm::~RobotomyRequestForm(void)	{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : _target(copy._target)	{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)	{
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}


//		MEMBER FUNCTIONS

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!checkExecution(executor))
		return false;
	srand(time(NULL));
	std::cout << "~~~     BbbbbbrrrRRRrrrVVVvrVBbbRBrrr   ~~~" << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << this->_target << " has been robotomized by " << executor.getName() << "." << std::endl;
	}
	else {
		std::cout << executor.getName() << " failed to robotomize " << getName() << "." << std::endl;
	}
	return true;
}

