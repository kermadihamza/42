/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:33:01 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:33:03 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


//		CON/DESTRUCTION

AForm::AForm(void) : _name("Random doc"), _is_signed(false), _grade_to_sign(150), _grade_to_execute(150)	{
	std::cout << "Random doc created at grade 150 to sign and execute." << std::endl;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _is_signed(false)	{
	_grade_to_sign = grade_to_sign;
	if (isGradeCorrect(grade_to_sign, "grade to sign"))	{
		std::cout << "Form " << _name << " was created at grade to sign " << _grade_to_sign << "." << std::endl;
	}
	_grade_to_execute = grade_to_execute;
	if (isGradeCorrect(grade_to_execute, "grade to execute"))	{
		std::cout << "Form " << _name << " was created at grade to execute " << _grade_to_execute << "." << std::endl;
	}
}

AForm::AForm(AForm const &copy) : _name(copy._name)	{
	*this = copy;
	std::cout << "Copy constructor called after " << copy._name << "." << std::endl;
}

AForm::~AForm(void)	{
	std::cout << "Form " << _name << " has been destroyed." << std::endl;
}


//		IS IT POSSIBLE

bool	AForm::isGradeCorrect(int grade, std::string type) const	{
	try
	{
		if (grade < _gmax)
			throw (AForm::GradeTooHighException());
		else if (grade > _gmin)
			throw (AForm::GradeTooLowException());
		return true;
	}
	catch (AForm::GradeTooHighException high)
	{
		std::cout << getName() << type << high.what() << std::endl;
	}
	catch (AForm::GradeTooLowException low)
	{
		std::cout << getName() << type << low.what() << std::endl;
	}
	return false;
}

bool	AForm::checkExecution(Bureaucrat const &executor) const	{
	if (!isGradeCorrect(executor.getGrade(), "Executor's grade"))
		return false;
	try
	{
		if (!isSigned())
			throw (AForm::NotSignedException());
		if (executor.getGrade() > getGradeToExecute())
			throw (AForm::GradeTooLowException());
	}
	catch (AForm::GradeTooLowException low)	{
		std::cout << executor.getName() << low.what() << " to execute " << getName() << std::endl;
		return false;
	}
	catch (AForm::NotSignedException not_signed)	{
		std::cout << getName() << not_signed.what() << std::endl;
		return false;
	}
	return true;
}

//		MEMBER FUNCTIONS

std::string	AForm::getName(void) const	{
	return _name;
}

int			AForm::getGradeToSign(void) const	{
	return _grade_to_sign;
}

int			AForm::getGradeToExecute(void) const	{
	return _grade_to_execute;
}

bool	AForm::isSigned(void) const	{
	return _is_signed;
}

void	AForm::beSigned(Bureaucrat &b)	{
	if (!isGradeCorrect(b.getGrade(), "Bureaucrat grade")
		|| !isGradeCorrect(_grade_to_execute, "Form grade to execute")
		|| !isGradeCorrect(_grade_to_sign, "Form grade to sign"))
		return ;
		if (_grade_to_sign < b.getGrade())
			throw (Bureaucrat::GradeTooLowException());
		_is_signed = true;
}


//		EXCEPTIONS

const char	*AForm::GradeTooHighException::what() const throw()	{
	return ("'s grade is too high");
}

const char	*AForm::GradeTooLowException::what() const throw()	{
	return ("'s grade is too low");
}

const char	*AForm::NotSignedException::what() const throw()	{
	return (" can't be executed since it has not been signed yet.");
}


//		OPERATOR OVERLOADS

AForm	&AForm::operator=(AForm const &rhs)	{
	_is_signed = rhs._is_signed;
	_grade_to_sign = rhs._grade_to_sign;
	_grade_to_execute = rhs._grade_to_execute;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs)	{
	o << rhs.getName() << ", form grade to sign : " << rhs.getGradeToSign() 
		<< " and grade to execute : " << rhs.getGradeToExecute() << "." << std::endl;
	return (o);
}