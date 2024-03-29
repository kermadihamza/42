/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:02:13 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:08:36 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


//		CON/DESTRUCTION

Form::Form(void) : 
_name("Random doc"),
_is_signed(false),
_grade_to_sign(150),
_grade_to_execute(150)
{
	std::cout << "Random doc created at grade 150 to sign and execute." << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : 
_name(name),
_is_signed(false),
_grade_to_sign(grade_to_sign),
_grade_to_execute(grade_to_execute)
{
	if (test(grade_to_sign, "grade to sign"))	{
		std::cout << "Form " << _name << " was created at grade to sign " << _grade_to_sign << "." << std::endl;
	}
	if (test(grade_to_execute, "grade to execute"))	{
		std::cout << "Form " << _name << " was created at grade to execute " << _grade_to_execute << "." << std::endl;
	}
}

Form::Form(Form const &copy) :
_name(copy._name),
_grade_to_sign(copy._grade_to_sign),
_grade_to_execute(copy._grade_to_execute)
{
	*this = copy;
	std::cout << "Copy constructor called after " << copy._name << "." << std::endl;
}

Form::~Form(void)	{
}


//		IS IT POSSIBLE

bool	Form::test(int grade, std::string type)	{
	try
	{
		if (grade < _gmax)
			throw (Form::GradeTooHighException());
		else if (grade > _gmin)
			throw (Form::GradeTooLowException());
		return true;
	}
	catch (Form::GradeTooHighException high)
	{
		std::cout << _name << type << high.what() << std::endl;
	}
	catch (Form::GradeTooLowException low)
	{
		std::cout << _name << type << low.what() << std::endl;
	}
	return false;
}


//		MEMBER FUNCTIONS

std::string	Form::getName(void) const	{
	return _name;
}

int			Form::getGradeToSign(void) const	{
	return _grade_to_sign;
}

int			Form::getGradeToExecute(void) const	{
	return _grade_to_execute;
}

void	Form::beSigned(Bureaucrat &b)	{
	if (!test(b.getGrade(), "Bureaucrat grade")
		|| !test(_grade_to_execute, "Form grade to execute")
		|| !test(_grade_to_sign, "Form grade to sign"))
		return ;
		if (_grade_to_sign < b.getGrade())
			throw (Bureaucrat::GradeTooLowException());
		_is_signed = true;
}


//		EXCEPTIONS

const char	*Form::GradeTooHighException::what() const throw()	{
	return ("'s grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()	{
	return ("'s grade is too low");
}


//		OPERATOR OVERLOADS

Form	&Form::operator=(Form const &rhs)	{
	_is_signed = rhs._is_signed;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)	{
	o << rhs.getName() << ", form grade to sign : " << rhs.getGradeToSign() 
		<< " and grade to execute : " << rhs.getGradeToExecute() << "." << std::endl;
	return (o);
}
