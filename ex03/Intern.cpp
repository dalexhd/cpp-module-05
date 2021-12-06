/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:30:42 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 12:48:06 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(std::string const & name, std::string const & target)
{
	(void)target;
	Form *form = new Form(name, 1, 5);
	return (form);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}
