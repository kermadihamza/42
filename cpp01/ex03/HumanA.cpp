/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:29:04 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:29:06 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
	_name(name), _weapon(weapon) {}

void HumanA::attack() {
	std::cout << _name << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}