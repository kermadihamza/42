/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:30:03 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:30:06 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): _type("hand") {}

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon() {}

void Weapon::setType(std::string type) {
	_type = type;
}

const std::string Weapon::getType() {
	return _type;
}