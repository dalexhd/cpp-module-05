/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:31:59 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/01 20:11:07 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, size_t grade): _name(name), _grade(grade)
{
	std::cout << "Default constructor called" << std::endl;
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

void	Bureaucrat::levelUpGrade(void)
{
	_grade--;
}

void	Bureaucrat::levelDownGrade(void)
{
	_grade++;
}
