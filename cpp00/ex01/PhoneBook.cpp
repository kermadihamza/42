/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:11:35 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 13:27:26 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _contacts() {}

void PhoneBook::addContact() {
	_contacts[_index % 8].initialize();
	_index = (_index + 1);
}

void PhoneBook::searchContact() {
	std::string input;
	int index;

	if (_index == 0) {
		std::cout << "Nothing to display" << std::endl;
		return ;
	}
	displayContacts();
	std::cout << "Index of the entry to display" << std::endl;
	std::getline(std::cin, input);
	try {
 		index = std::stoi(input);
	} catch(std::invalid_argument& e) {
		std::cout << "Wrong index value" << std::endl;
		return ;
	} catch (const std::out_of_range & e) {
		std::cout << "Wrong index value" << std::endl;
		return ;
	}
	if (0 <= index && index < _index && index < 8)
		_contacts[index].displayLines();
	else
		std::cout << "Wrong index value" << std::endl;
}

void PhoneBook::displayContacts() {
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < 8; i++) {
		if (i < _index)
			_contacts[i].displayTab(i);
	}
	std::cout << std::string(45, '-') << std::endl;
}