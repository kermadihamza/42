/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:19:22 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/01 14:19:24 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _raw(0) {};

Fixed::Fixed(const Fixed& fixed) {
	_raw = fixed.getRawBits();
}

Fixed::Fixed(const int value) {
	_raw = (value << Fixed::_nbits);
}

Fixed::Fixed(const float value) {
	_raw = roundf(value * (1 << Fixed::_nbits));
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	_raw = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

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

bool Fixed::operator>(const Fixed& fixed) {
	return _raw > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed& fixed) {
	return _raw < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed& fixed) {
	return _raw >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed& fixed) {
	return _raw <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed& fixed) {
	return _raw == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed& fixed) {
	return _raw != fixed.getRawBits();
}

const Fixed Fixed::operator+(const Fixed& fixed) {
	Fixed res = *this;
	res.setRawBits(_raw + fixed.getRawBits());
	return res;
}

const Fixed Fixed::operator-(const Fixed& fixed) {
	Fixed res = *this;
	res.setRawBits(_raw - fixed.getRawBits());
	return res;
}

const Fixed Fixed::operator*(const Fixed& fixed) {
	Fixed res = *this;
	res.setRawBits(_raw * fixed.getRawBits() / (1 << Fixed::_nbits));
	return res;
}

const Fixed Fixed::operator/(const Fixed& fixed) {
	Fixed res = *this;
	res.setRawBits(_raw * (1 << Fixed::_nbits) / fixed.getRawBits());
	return res;
}

Fixed Fixed::operator++() {
	_raw += 1;
	return *this;
}

Fixed Fixed::operator--() {
	_raw -= 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed res(*this);
	_raw += 1;
	return res;
}

Fixed Fixed::operator--(int) {
	Fixed res(*this);
	_raw -= 1;
	return res;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (Fixed)f1 < (Fixed)f2 ? f1 : f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (Fixed)f1 >= (Fixed)f2 ? f1 : f2;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return f1 >= f2 ? f1 : f2;
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}