/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:47:24 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 17:01:16 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "Form.hpp"

#ifndef A_PRESIDENTIAL_PARDON_FORM_H
	#define A_PRESIDENTIAL_PARDON_FORM_H
	class PresidentialPardonForm: public Form
	{
		private:
			std::string	target;
		protected:
		public:
			void execute(Bureaucrat const & executor) const;
			std::string	getTarget(void) const;
			PresidentialPardonForm(std::string const & destination);
			~PresidentialPardonForm();
	};
#endif
