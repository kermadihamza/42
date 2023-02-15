/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:57:15 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/15 13:57:17 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ScavTrap.hpp"

class FragTrap: public ScavTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();
	FragTrap& operator=(FragTrap const &rhs);

	void highFivesGuys();
};

#endif