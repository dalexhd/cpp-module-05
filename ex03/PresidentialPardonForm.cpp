/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:47:22 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 11:17:34 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->neededGrade())
		throw GradeTooLowException();
	else if (!this->isSigned())
		throw NotSigned();
	std::cout << C_BLUE << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << C_X << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}
