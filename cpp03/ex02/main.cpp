/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:57:25 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 15:54:31 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main() {
	FragTrap actor("FragTrap");
	actor.attack("Jakobs");
	actor.takeDamage(3);
	actor.beRepaired(3);
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++) {
		actor.attack("Jakobs");
	}
	std::cout << std::endl;
	
	actor.takeDamage(50);
	actor.guardGate();
	actor.beRepaired(3);
	actor.highFivesGuys();
	return 0;
}