/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:22 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:08:46 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form(Form const &copy);
		Form	&operator=(Form const &rhs);
		~Form(void);

		bool		test(int grade, std::string type);
		void		beSigned(Bureaucrat &b);
		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

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
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
		static const int	_gmax = 1;
		static const int	_gmin = 150;

};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
