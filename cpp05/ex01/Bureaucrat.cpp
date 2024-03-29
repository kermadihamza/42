/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:01:52 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:08:17 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


//		CON/DESTRUCTORS

Bureaucrat::Bureaucrat(void) : _name("random person")	{
	_grade = 150;
	std::cout << "Random dude created at grade 150." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	try	{
		_grade = grade;
		if (grade < _gmax)
			throw (Bureaucrat::GradeTooHighException());
		else if (grade > _gmin)
			throw (Bureaucrat::GradeTooLowException());
		std::cout << "Bureaucrat " << _name << " was created at grade " << _grade << "." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException high)	{
		std::cout << _name << high.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException low)	{
		std::cout << _name << low.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name)	{
	*this = copy;
	std::cout << "Copy constructor called after " << copy._name << "." << std::endl;
}

Bureaucrat::~Bureaucrat(void)	{
		std::cout << "Bureaucrat " << _name << " has been destroyed." << std::endl;
}


//		MEMBER FUNCTIONS

std::string	Bureaucrat::getName(void) const	{
	return _name;
}

int			Bureaucrat::getGrade(void) const	{
	return _grade;
}

void		Bureaucrat::incrementGrade(void)	{
	try	{
		if (_grade <= _gmax)
			throw Bureaucrat::GradeTooHighException();
		else if (_grade >= _gmin)
			throw (Bureaucrat::GradeTooLowException());
		_grade--;
		std::cout << _name << " was incremented to grade " << _grade << "." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException high)	{
		std::cout << _name << high.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException low)	{
		std::cout << _name << low.what() << std::endl;
	}
}

void		Bureaucrat::decrementGrade(void)	{
	try	{
		if (_grade <= _gmax)
			throw Bureaucrat::GradeTooHighException();
		else if (_grade >= _gmin)
			throw Bureaucrat::GradeTooLowException();
		_grade++;
		std::cout << _name << " was decremented to grade " << _grade  << "." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException high)	{
		std::cout << _name << high.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException low)	{
		std::cout << _name << low.what() << std::endl;		
	}
}

void	Bureaucrat::signForm(Form &f)	{
	try
	{
		f.beSigned(*this);
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << _name << e.what() << " to sign " << f.getName() << "." << std::endl;
		return;
	}
	std::cout << f.getName() << " was signed by " << _name << "." << std::endl;
}



//		EXCEPTIONS

const char	*Bureaucrat::GradeTooHighException::what() const throw()	{
	return ("'s grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()	{
	return ("'s grade is too low");
}


//		OPERATOR OVERLOADS

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)	{
	_grade = rhs._grade;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)	{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (o);
}