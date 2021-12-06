/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:47:27 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 17:01:35 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->neededGrade())
		throw GradeTooLowException();
	else if (!this->isSigned())
		throw NotSigned();
	std::cout << C_BLUE <<  "Bzzzz or Zzzz " << C_X << std::endl;
	std::cout << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}
