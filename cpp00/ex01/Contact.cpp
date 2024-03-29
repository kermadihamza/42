/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:41:49 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 13:30:15 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::initialize() {
	getField("FirstName", _firstName);
	getField("LastName", _lastName);
	getField("Nickname", _nickname);
	getField("Phone number", _phoneNumber);
	getField("Darkest secret", _darkestSecret);
}

void Contact::getField(std::string message, std::string& field) {
	do {
		std::cout << message << " : ";
		std::getline(std::cin, field);
	} while (field.empty() || !isValidField(field));
}

bool Contact::isValidField(std::string field) {
	for (size_t i = 0; i < field.size(); i++) {
		if (field[i] == '\t')
			return false;
	}
	for (size_t i = 0; i < field.size(); i++) {
		if (isalnum(field[i]))
			return true;
	}
	return false;
}

void Contact::displayField(std::string field) {
	if (field.size() > 10)
		field[9] = '.';
	std::cout << "|" << std::setw(10) << field.substr(0, 10);
}

void Contact::displayLines() {
	std::cout << "First name : " << _firstName << std::endl;
	std::cout << "Last name : " << _lastName << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phoneNumber << std::endl;
	std::cout << "Darkest secret : " << _darkestSecret << std::endl;
}

void Contact::displayTab(int index) {
	std::cout << std::string(45, '-') << std::endl;
	std::cout << "|" << std::setw(10) << index;
	displayField(_firstName);
	displayField(_lastName);
	displayField(_nickname);
	std::cout << "|" << std::endl;
}