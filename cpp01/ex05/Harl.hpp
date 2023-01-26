/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:39:42 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:44:23 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
};

#endif