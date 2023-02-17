/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:48:15 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 14:48:16 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(Dog const &src);
	~Dog();
	Dog &operator=(Dog const &rhs);

	void makeSound() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};

#endif