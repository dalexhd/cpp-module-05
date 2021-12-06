/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:25:04 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 12:48:04 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include "Form.hpp"

#ifndef A_INTERN_H
	#define A_INTERN_H
	class Intern
	{
		private:
		public:
			Form *makeForm(std::string const & name, std::string const & target);
			~Intern();
	};
#endif
