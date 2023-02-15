/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:57:07 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 14:00:58 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap ";
	std::cout << "Default constructor called" << std::endl;
	_name = "FragTrap";
	_hitPoint = 100;
	_ennergyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ScavTrap(name) {
	std::cout << "FragTrap ";
	std::cout << "Constructor called" << std::endl;
	_hitPoint = 100;
	_ennergyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	_name = src._name;
	_hitPoint = src._hitPoint;
	_ennergyPoint = src._ennergyPoint;
	_attackDamage = src._attackDamage;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap ";
	std::cout << "Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_ennergyPoint = rhs._ennergyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	if (_hitPoint <= 0 || _ennergyPoint <= 0) {
		std::cout << "There was no effect on " << _name << "!" << std::endl;
		return ;
	}
	std::cout << _name << " request a positive hight fives!" << std::endl;
}