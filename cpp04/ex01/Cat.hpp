/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:42:39 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 14:42:41 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(Cat const &src);
	~Cat();
	Cat &operator=(Cat const &rhs);

	void makeSound() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};

#endif