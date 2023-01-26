/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:11:04 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 13:11:20 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Contact {
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
	void initialize();
	void getField(std::string, std::string&);
	void displayLines();
	void displayField(std::string);
	void displayTab(int);
	bool isValidField(std::string);
	std::string getFirstName() { return _firstName; }
	std::string getLastName() { return _lastName; }
	std::string getNickName() { return _nickname; }
	std::string getPhoneNumber() { return _phoneNumber; }
	std::string getDarkestSecret() { return _darkestSecret; }
};

#endif