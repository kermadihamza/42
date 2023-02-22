/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:59:13 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 13:59:15 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("Bob", 3);
		std::cout << b;
		b.increment();
		std::cout << b;
		b.increment();
		std::cout << b;
		b.increment();
		std::cout << b << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl;
	try
	{
		Bureaucrat c("Eve", 148);
		std::cout << c;
		c.decrement();
		std::cout << c;
		c.decrement();
		std::cout << c;
		c.decrement();
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
