/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:39:09 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 12:09:34 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, size_t grade, size_t neededGrade): _name(name), _grade(grade), _neededGrade(neededGrade), isSignned(false)
{
	std::cout << "Form default constructor called" << std::endl;
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}

char const *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade to high!");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade to low!");
}

char const *Form::NotSigned::what() const throw()
{
	return ("Form is not signed!");
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName(void)
{
	return (_name);
}

size_t	Form::getGrade(void)
{
	return (_grade);
}

size_t	Form::neededGrade(void) const
{
	return (_neededGrade);
}

bool	Form::isSigned(void) const
{
	return (isSignned);
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() < this->neededGrade())
		throw Form::GradeTooLowException();
	this->isSignned = true;
}

void	Form::levelUpGrade(void)
{
	if (_grade - 1 < 1)
		throw Form::GradeTooLowException();
	_grade--;
}

void	Form::levelDownGrade(void)
{
	if (_grade + 1 > 150)
		throw Form::GradeTooHighException();
	_grade++;
}

void	Form::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << "Base Form::execute method called" << std::endl;
}

// Stream out operator
std::ostream & operator<<(std::ostream & stream , Form & form)
{
	stream
		<< form.getName().c_str() << std::endl
		<< form.getGrade() << std::endl
		<< form.neededGrade();
	return stream;
}
