/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:19:51 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/01 14:19:54 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

void standard_test() {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

void personal_test() {
	Fixed a(5.05f);
	Fixed b(Fixed(5.05f) * Fixed(2));

	std::cout << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
}

int main() {
	standard_test();
	personal_test();
	return 0;
}