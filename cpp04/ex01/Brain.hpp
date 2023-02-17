/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:42:24 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 14:42:25 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
protected:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain const &src);
	~Brain();
	Brain &operator=(Brain const &rhs);

	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};

#endif