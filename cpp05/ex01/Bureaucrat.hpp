/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:01 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:08:26 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &f);

		class GradeTooHighException	: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException	: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
		static const int	_gmax = 1;
		static const int	_gmin = 150;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

# endif
