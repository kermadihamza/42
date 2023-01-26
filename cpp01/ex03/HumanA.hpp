/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:29:16 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:29:18 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include <string>
# include "Weapon.hpp"
# include <iostream>

class HumanA {
private:
	std::string _name;
	Weapon &_weapon;
	
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
};

#endif