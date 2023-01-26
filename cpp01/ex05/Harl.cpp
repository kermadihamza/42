/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:39:24 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:44:03 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
}

Harl::~Harl(void)	{
}

void	Harl::debug(void)	{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl ;
}

void	Harl::info(void)	{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl ;
}

void	Harl::warning(void)	{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl ;
}

void	Harl::error(void)	{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl ;
}

void	Harl::complain(std::string level)	{
	
	std::string	comparison[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*functer[4])(void) = {	&Harl::debug, &Harl::info,
										&Harl::warning, &Harl::error	};

	for (int i = 0; i < 4; i++)	{
		if (level == comparison[i] && i != 4)
			(this->*(functer[i]))();
	}
	return;
}