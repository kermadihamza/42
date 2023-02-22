/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:39:38 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:54:26 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	jobs[0] = &Intern::createPresidentialPardon;
	jobs[1] = &Intern::createRobotomyRequest;
	jobs[2] = &Intern::createShrubberyCreation;
}

Intern::Intern(const Intern &src)
{
	(void) src;
}

Intern::~Intern() {
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	return *this;
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string formName[] = {
		"presidential pardon", "robotomy request", "shrubbery creation"
	};
	for (size_t i = 0; i < 4; i++) {
		if (name == formName[i])
			return (this->*jobs[i])(target);
	}
	throw Intern::FormNotFound();
}

Form* Intern::createPresidentialPardon(std::string name) {
	return new PresidentialPardonForm(name);
}

Form* Intern::createRobotomyRequest(std::string name) {
	return new RobotomyRequestForm(name);
}

Form* Intern::createShrubberyCreation(std::string name) {
	return new ShrubberyCreationForm(name);
}

const char *Intern::FormNotFound::what() const throw()
{
	return "The form name doesn't exist";
}
