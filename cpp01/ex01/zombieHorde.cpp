/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:40:17 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 14:43:12 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)	{
	Zombie	*ZombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)	{
		ZombieHorde[i].setName(name);
	}
	return (ZombieHorde);
}