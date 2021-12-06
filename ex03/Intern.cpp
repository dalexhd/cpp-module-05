/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:30:42 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 18:04:35 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::CreateShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::CreateRobotomyForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::CreatePresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string const & name, std::string const & target)
{
	std::string Targets[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*TargetsFunction[3])(const std::string &target) = {&Intern::CreateShrubberyCreationForm, &Intern::CreateRobotomyForm, &Intern::CreatePresidentialPardonForm};

	for (size_t i = 0; i < sizeof(TargetsFunction)/sizeof(TargetsFunction[0]); i++)
	{
		if (name == Targets[i])
		{
			std::cout << C_GREEN << "Intern creates " << name.c_str() << C_X << std::endl;
			return (this->*TargetsFunction[i])(target);
		}
	}
	throw InvalidFormNameError(name);
	return (0);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}
