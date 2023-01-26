/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:30:10 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:30:19 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
private:
	std::string _type;
	
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	const std::string getType();
};

#endif