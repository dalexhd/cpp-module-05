/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:39:12 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 18:05:18 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include <Bureaucrat.hpp>
#include <Colors.hpp>

#ifndef A_FORM_H
	#define A_FORM_H
	class Form
	{
		private:
			std::string	const	_name;
			size_t	_grade;
			size_t	_neededGrade;
			bool	isSignned;
		public:
			void	levelUpGrade(void);
			void	levelDownGrade(void);
			size_t	getGrade(void);
			size_t	neededGrade(void) const;
			std::string	getName(void);
			void	beSigned(Bureaucrat bureaucrat);
			bool	isSigned()  const;;
			Form(const std::string &name, size_t grade, size_t neededGrade);
			virtual ~Form();
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
			class NotSigned : public std::exception
			{
				public:
					char const * what() const throw();
			};
			class FileError : public std::exception
			{
				public:
					char const * what() const throw();
			};
		 	virtual void execute(Bureaucrat const & executor) const;
	};
	std::ostream & operator<<(std::ostream & stream , Form & form);
#endif
