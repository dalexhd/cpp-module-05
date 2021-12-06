/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:47:29 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 16:59:42 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "Form.hpp"

#ifndef A_ROBOTOMY_REQUEST_FORM_H
	#define A_ROBOTOMY_REQUEST_FORM_H
	class Form;
	class RobotomyRequestForm: public Form
	{
		private:
			std::string	target;
		public:
			void execute(Bureaucrat const & executor) const;
			std::string	getTarget(void) const;
			RobotomyRequestForm(std::string const & destination);
			~RobotomyRequestForm();
	};
#endif
