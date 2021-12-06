/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:25:04 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 17:56:27 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#ifndef A_INTERN_H
	#define A_INTERN_H
	class Intern
	{
		private:
		public:
			class InvalidFormNameError : public std::exception
			{
				std::string	msg;
				public:
					InvalidFormNameError(const std::string& name): msg(std::string("Invalid form name: ") + name) {}
					virtual const char * what() const throw()
					{
						return msg.c_str();
					}
			};
			Form * CreateShrubberyCreationForm(std::string const & target);
			Form * CreateRobotomyForm(std::string const & target);
			Form * CreatePresidentialPardonForm(std::string const & target);
			Form * makeForm(std::string const & name, std::string const & target);
			~Intern();
	};
#endif
