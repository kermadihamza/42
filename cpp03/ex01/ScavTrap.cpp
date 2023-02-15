/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:47:02 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 13:51:46 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap ";
	std::cout << "Default constructor called" << std::endl;
	_name = "ScavTrap";
	_hitPoint = 100;
	_ennergyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap ";
	std::cout << "Constructor called" << std::endl;
	_hitPoint = 100;
	_ennergyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	_name = src._name;
	_hitPoint = src._hitPoint;
	_ennergyPoint = src._ennergyPoint;
	_attackDamage = src._attackDamage;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap ";
	std::cout << "Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap ";
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_ennergyPoint = rhs._ennergyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	if (_hitPoint <= 0 || _ennergyPoint <= 0) {
		std::cout << "There was no effect on " << _name << "!" << std::endl;
		return ;
	}
	std::cout << _name << " is now in Gate keeper mode!" << std::endl;
}