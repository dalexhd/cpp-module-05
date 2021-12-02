/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:39:12 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/02 19:34:50 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include <Bureaucrat.hpp>

#ifndef A_FORM_H
	#define A_FORM_H
	class Form
	{
		protected:
			std::string	const	_name;
			size_t	_grade;
			size_t	_neededGrade;
			bool	isSignned;
		public:
			void	levelUpGrade(void);
			void	levelDownGrade(void);
			size_t	getGrade(void);
			size_t	neededGrade(void);
			std::string	getName(void);
			void	beSigned(Bureaucrat bureaucrat);
			bool	isSigned();
			Form(const std::string &name, size_t grade, size_t neededGrade);
			~Form();
			class GradeTooHighException : public std::exception
			{
				public:
					char const * what() const throw();
			};
			class GradeTooLowException : public std::exception
			{
				public:
					char const * what() const throw();
			};
	};
	std::ostream & operator<<(std::ostream & stream , Form & form);
#endif
