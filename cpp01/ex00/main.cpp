/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:54:35 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 14:12:54 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	*Hakermad;
	Zombie	*Marine = newZombie("Marine");
	Zombie	Mahad = Zombie("Mahad");

	randomChump("Angelo");
	randomChump("Julie");
	delete (Marine);
	Hakermad = newZombie("Hakermad");
	Hakermad->announce();
	Mahad.announce();
	delete (Hakermad);
	return (0);
}