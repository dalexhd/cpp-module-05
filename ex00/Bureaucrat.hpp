/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:02 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/01 20:03:51 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

#ifndef A_BUREAUCRAT_H
	#define A_BUREAUCRAT_H
	class Bureaucrat
	{
		protected:
			std::string	const	_name;
			size_t	_grade;
		public:
			void	levelUpGrade(void);
			void	levelDownGrade(void);
			std::string	getName(void);
			size_t	getGrade(void);
			Bureaucrat(const std::string &name, size_t grade);
			~Bureaucrat();

	};
#endif