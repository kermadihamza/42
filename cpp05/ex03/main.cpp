/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:39:53 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:54:47 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern intern;
	try
	{
		Form *form = intern.makeForm("robotomy request", "target");
		std::cout << *form;
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form *form = intern.makeForm("shrubbery creation", "target");
		std::cout << *form;
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form *form = intern.makeForm("presidential pardon", "target");
		std::cout << *form;
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form *form = intern.makeForm("telegram request", "target");
		std::cout << *form;
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	return 0;
}
