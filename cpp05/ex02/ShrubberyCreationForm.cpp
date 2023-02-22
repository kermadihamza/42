/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:34:23 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:34:24 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::_tree =
"          .     .  .      +     .      .          .\n"
"     .       .      .     #       .           .\n"
"        .      .         ###            .      .      .\n"
"      .      .   '#:. .:##'##:. .:#'  .      .\n"
"          .      . '####'###'####'  .\n"
"       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n"
"  .             '#########'#########'        .        .\n"
"        .    '#:.  '####'###'####'  .:#'   .       .\n"
"     .     .  '#######'##'##'#######'                  .\n"
"                .'##'#####'#####'##'           .      .\n"
"    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n"
"      .     '#######'##'#####'##'#######'      .     .\n"
"    .    .     '#####'#######'#####'    .      .\n"
"            .     '      000      '    .     .'\n"
"       .         .   .   000     .        .       .\n"
".. .. ..................O000O.................. .... ..";


//		CON/DESTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Schrubbery", 145, 137), _target("Shrubbery")	{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137), _target(target)	{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)	{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : _target(copy._target)	{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)	{
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}


//		MEMBER FUNCTIONS

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!checkExecution(executor))
		return false;
	std::ofstream	ofs(_target + "_shrubbery");
	ofs << _tree;
	return true;
}
