/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:56:37 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 14:00:55 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap ";
	std::cout << "Default constructor called" << std::endl;
	_name = "ClapTrap";
	_hitPoint = 10;
	_ennergyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap ";
	std::cout << "Constructor called" << std::endl;
	_name = name;
	_hitPoint = 10;
	_ennergyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap ";
	std::cout << "Copy constructor called" << std::endl;
	_name = src._name;
	_hitPoint = src._hitPoint;
	_ennergyPoint = src._ennergyPoint;
	_attackDamage = src._attackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap ";
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap ";
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_ennergyPoint = rhs._ennergyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoint <= 0 || _ennergyPoint <= 0) {
		std::cout << "There was no effect on " << target << "!" << std::endl;
		return ;
	}
	std::cout << _name << " attacks! ";
	std::cout << target << " took " << _attackDamage << " damage!" << std::endl;
	_ennergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint <= 0) {
		std::cout << "There was no effect on " << _name << "!" << std::endl;
		return ;
	}
	std::cout << _name << " took " << amount << " damage!" << std::endl;
	_hitPoint -= amount;
	if (_hitPoint <= 0) {
		std::cout << _name << " has fallen!" << std::endl;
		_hitPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoint <= 0 || _ennergyPoint <= 0) {
		std::cout << "There was no effect on " << _name << "!" << std::endl;
		return ;
	}
	std::cout << _name << " recovered " << amount;
	std::cout << " hp!" << std::endl;
	_hitPoint += amount;
	_ennergyPoint--;
}