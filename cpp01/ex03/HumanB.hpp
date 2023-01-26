/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:29:39 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:29:41 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <string>
# include "Weapon.hpp"
# include <iostream>


class HumanB {
private:
	std::string _name;
	Weapon *_weapon;
	
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif