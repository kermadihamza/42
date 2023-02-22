/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:39:45 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:54:36 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string.h>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	typedef Form* (Intern::*Job)(std::string);
	Job jobs[3];
public:
	Intern();
	Intern(Intern const &src);
	~Intern();
	Intern &operator=(Intern const &rhs);
	Form* makeForm(std::string name, std::string target);
	Form* createPresidentialPardon(std::string name);
	Form* createRobotomyRequest(std::string name);
	Form* createShrubberyCreation(std::string name);

	class FormNotFound : public std::exception
	{
	public:
		const char* what() const throw();
	};

};

#endif