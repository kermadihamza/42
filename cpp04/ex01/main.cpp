/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:43:05 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/17 14:04:43 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "Create Dog (j) :" << std::endl;
	const Animal *j = new Dog();

	std::cout << std::endl << "Create Cat (i) :" << std::endl;
	const Animal *i = new Cat();

	std::cout << std::endl << "destructor :" << std::endl;
	delete j;
	delete i;

	std::cout << std::endl << std::endl << "Create Animal (animals[2]) :" << std::endl;
	const Animal* animals[2] = {new Dog(), new Cat()};
	
	std::cout << std::endl << "Delete Animal (animal[2]) :" << std::endl;
    for (int i = 0; i < 2; i++)
	{
        delete animals[i];
		std::cout << std::endl;
    }

	std::cout << std::endl << "Deep copy example" << std::endl;
	std::cout << "Create Dog (d) :" << std::endl;
	Dog d;
	std::cout << std::endl << "Create Dog (e) :" << std::endl;
	Dog e;

	std::cout << std::endl << "e = d" << std::endl;
	e = d;

	d.setIdea(0, "eat");
	e.setIdea(0, "sleep");
	std::cout << std::endl << "d.getIdea(0, \"eat\") = " << d.getIdea(0) << std::endl;
	std::cout << "e.getIdea(0, \"sleep\") = " << e.getIdea(0) << std::endl;
	
	std::cout << std::endl << "Destructor (d and e) :" << std::endl;
	return 0;
}