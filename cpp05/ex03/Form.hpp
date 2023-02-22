/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:39:11 by hakermad          #+#    #+#             */
/*   Updated: 2023/02/22 14:53:48 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	const int grade;
	const int requiredGrade;
	bool isSigned;

public:
	Form();
	Form(std::string n, int g, int rg);
	Form(Form const &src);
	virtual ~Form();
	Form &operator=(Form const &rhs);

	std::string getName() const;
	bool getIsSigned() const;
	int getGrade() const;
	int getRequiredGrade() const;
	void beSigned(Bureaucrat b);
	void display(std::ostream &os) const;
	void checkForm(Bureaucrat const &executor) const;
	virtual void execute(Bureaucrat const &executor) const = 0;

	friend std::ostream &operator<<(std::ostream &os, const Form &b);
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class IsAlreadySigned : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class IsNotSigned : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif