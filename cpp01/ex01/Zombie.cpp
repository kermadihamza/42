/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:39:31 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 14:42:29 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Marine zombie")	{
	std::cout << this->_name << " created" << std::endl;
}

Zombie::Zombie(std::string name)	{
	this->_name = name;
	std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie(void)	{
	std::cout << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce(void)	{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void)	{
	return _name;
}

void	Zombie::setName(std::string name)	{
	_name = name;
}