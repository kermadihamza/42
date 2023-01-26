/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:38:32 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 14:41:58 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int n = 5;
	Zombie *zombies = zombieHorde(n, "Hakermad");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}