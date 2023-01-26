/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:40:02 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 14:40:03 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie	{

private:
	std::string	_name;
	
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void);
	std::string	getName(void);
	void		setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif