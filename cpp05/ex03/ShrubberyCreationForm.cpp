/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:40:37 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:55:52 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::ascii =
	"       _-_\n"
	"    /~~   ~~\\\n"
	" /~~         ~~\\\n"
	"{               }\n"
	" \\  _-     -_  /\n"
	"   ~  \\\\ //  ~\n"
	"_- -   | | _- _\n"
	"  _ -  | |   -_\n"
	"      // \\\\\n";



ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery", 145, 137), target("home")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t): Form("shrubbery", 145, 137), target(t)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : target(src.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	target = rhs.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
	checkForm(executor);
	std::ofstream of(target + "_shrubbery");
	if (of)
	{
		std::cout << target << "shrubbery creation form" << std::endl;
		of << ascii;
		of.close();
	}
};
