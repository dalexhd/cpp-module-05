/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:31:59 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/02 19:19:06 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &name, size_t grade): _name(name), _grade(grade)
{
	std::cout << "Default constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

char const *		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade to high!");
}

char const *		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade to low!");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

std::string	Bureaucrat::getName(void)
{
	return (_name);
}

size_t	Bureaucrat::getGrade(void)
{
	return (_grade);
}

void	Bureaucrat::signForm(Form form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << '\n';
	}
}

void	Bureaucrat::levelUpGrade(void)
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	_grade--;
}

void	Bureaucrat::levelDownGrade(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade++;
}
