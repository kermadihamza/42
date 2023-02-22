/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:33:36 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:37:01 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)	{
	
	std::cout << std::endl << "	--------CONSTRUCTORS--------	" << std::endl;
	Bureaucrat					Random;
	Bureaucrat					Hamza("Hamza", 10);
	Bureaucrat					Mahad("Mahad", 2);
	ShrubberyCreationForm		F12023("F12023");
	RobotomyRequestForm			F22023("F22023");
	PresidentialPardonForm		Marine("Marine");
	
	std::cout << std::endl << "	--------SIGNING AND EXECUTING--------	" << std::endl;
	F12023.execute(Mahad);
	Mahad.signForm(F12023);
	Random.executeForm(F12023);
	Mahad.executeForm(F12023);
	Mahad.signForm(F22023);
	Mahad.executeForm(F22023);
	Hamza.signForm(Marine);
	Hamza.executeForm(Marine);
	Mahad.executeForm(Marine);

	std::cout << std::endl << "	--------DESTRUCTORS--------	" << std::endl;
}