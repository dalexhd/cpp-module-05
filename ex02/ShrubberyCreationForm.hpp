/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:47:36 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 11:32:27 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "Form.hpp"

#ifndef A_SHRUBBERY_CREATION_FORM_H
	#define A_SHRUBBERY_CREATION_FORM_H
	class Form;
	class ShrubberyCreationForm: public Form
	{
		private:
			std::string	target;
		protected:
		public:
			void execute(Bureaucrat const & executor) const;
			std::string	getTarget(void) const;
			ShrubberyCreationForm(std::string target);
			~ShrubberyCreationForm();
	};
#endif
