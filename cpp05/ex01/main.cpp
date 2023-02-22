/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:30 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:12:13 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)	{
	
	std::cout << std::endl << " -------CONSTRUCTORS------- " << std::endl;
	Bureaucrat	Hamza("Hamza", 149);
	Bureaucrat	Mahad("Mahad", 2);
	Form		F12023("F12023", 10, 10);
	Form		F22023("C109/36", 2, 2);
	Form		F32023("F32023", 2, 2);
	
	std::cout << std::endl << " -------BE SIGNED AND SIGN FORM------- " << std::endl;
	try	{
		std::cout << "F22023 is being signed by Mahad... \n";
		F22023.beSigned(Mahad);
	}
	catch (const std::exception& e)	{
		std::cout << Mahad.getName() << e.what() << " to sign " << F22023.getName() << "." << std::endl;
	}
	try	{
		std::cout << "F12023 is being signed by Hamza... \n";
		F12023.beSigned(Hamza);
	}
	catch (const std::exception& e)	{
		std::cout << Hamza.getName() << e.what() << " to sign " << F12023.getName() << "." << std::endl;
	}
	
	Hamza.signForm(F32023);
	Mahad.signForm(F32023);
	std::cout << std::endl << " -------DESTRUCTORS------- " << std::endl;
}