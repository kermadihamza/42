/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:53:30 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 14:12:09 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)	{
}

Zombie::Zombie(std::string name)	{
	_name = name;
	std::cout << _name << " created" << std::endl;
}

Zombie::~Zombie(void)	{
	std::cout << _name << " destroyed" << std::endl;
}

void	Zombie::announce(void)	{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}