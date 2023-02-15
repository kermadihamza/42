/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:47:02 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 13:42:06 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap actor("ClapTrap");
	actor.attack("Jakobs");
	actor.takeDamage(3);
	actor.beRepaired(3);
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++) {
		actor.attack("Jakobs");
	}
	std::cout << std::endl;
	
	actor.takeDamage(10);
	actor.beRepaired(3);
	return 0;
}