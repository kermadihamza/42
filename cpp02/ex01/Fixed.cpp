/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:18:06 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/01 14:18:10 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _raw(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& fixed) {
	std::cout << "Copy constructor called" << std::endl;
	_raw = fixed.getRawBits();
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	_raw = (value << Fixed::_nbits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(value * (1 << Fixed::_nbits));
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	_raw = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return _raw;
}

void Fixed::setRawBits(int const raw) {
	_raw = raw;
}

float Fixed::toFloat() const {
	return ((float) _raw / (float) (1 << Fixed::_nbits));
}

int Fixed::toInt() const {
	return _raw >> Fixed::_nbits;
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}