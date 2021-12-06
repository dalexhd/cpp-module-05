/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:05 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 10:39:48 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////-----0----////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////
	// First part (Valid one!) //
	/////////////////////////////
	std::cout << "-----------------------" << std::endl <<
		"1: part (Valid one!)" << std::endl << "-----------------------" << std::endl;
	try
	{
		Bureaucrat one("one", 1);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	/////////////////
	// Second part //
	/////////////////
	std::cout << "------------------------------------------------" << std::endl <<
		"2: part (Invalid constructor too low one!)" << std::endl << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat two("one", 151);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	////////////////
	// Third part //
	////////////////
	std::cout << "------------------------------------------------" << std::endl <<
		"3: part (Invalid constructor too hight one!)" << std::endl << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat two("one", 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	////////////////
	// Furth part //
	////////////////
	std::cout << "----------------------------------------" << std::endl <<
		"4: part (Invalid downGrade!)" << std::endl << "----------------------------------------" << std::endl;
	try
	{
		Bureaucrat two("one", 150);
		two.levelDownGrade();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	///////////////
	// Fifth part //
	////////////////
	std::cout << "----------------------------------------" << std::endl <<
		"5: part (Invalid upGrade!)" << std::endl << "----------------------------------------" << std::endl;
	try
	{
		Bureaucrat two("one", 1);
		two.levelUpGrade();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////-----1----////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << "----------------------------------------" << std::endl <<
		"6: part (Valid form)" << std::endl << "----------------------------------------" << std::endl;
	try
	{
		Form valid("one", 1, 5);
		std::cout << valid << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------------------------------------------" << std::endl <<
		"7: part (Invalid form constructor too low!)" << std::endl << "------------------------------------------------" << std::endl;
	try
	{
		Form valid("one", 151, 10);
		std::cout << valid << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------------------------------------------" << std::endl <<
		"8: part (Invalid form constructor too high!)" << std::endl << "------------------------------------------------" << std::endl;
	try
	{
		Form valid("one", 0, 100);
		std::cout << valid << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------------------------------------------" << std::endl <<
		"9: part (Invalid bureaucrat sign!)" << std::endl << "------------------------------------------------" << std::endl;
	Form form("form1", 1, 3);
	std::cout << form << std::endl;
	Bureaucrat bureaucrat("bureaucrat1", 1);
	bureaucrat.signForm(form);

	std::cout << "------------------------------------------------" << std::endl <<
		"10: part (Invalid form beSigned!)" << std::endl << "------------------------------------------------" << std::endl;
	try
	{
		Form form2("form2", 1, 3);
		std::cout << form2 << std::endl;
		Bureaucrat bureaucrat2("bureaucrat2", 1);
		form2.beSigned(bureaucrat2);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////-----2----////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << "--------------------------------------------" << std::endl <<
		"11: part (Presedential Pardon)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm presidentialForm("trump");
		std::cout << presidentialForm << std::endl;
		Bureaucrat presedentialBureaucrat("presedentialBureaucrat", 10);
		presidentialForm.execute(presedentialBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------End---------------------------" << std::endl;
	return (0);
}
