/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:05 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/02 19:32:33 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////-----0----////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////
	// First part (Valid one!) //
	/////////////////////////////
	std::cout << "-----------------------" << std::endl <<
		"First part (Valid one!)" << std::endl << "-----------------------" << std::endl;
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
		"Second part (Invalid constructor too low one!)" << std::endl << "------------------------------------------------" << std::endl;
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
		"Third part (Invalid constructor too hight one!)" << std::endl << "------------------------------------------------" << std::endl;
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
		"Furth part (Invalid downGrade!)" << std::endl << "----------------------------------------" << std::endl;
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
		"Fifth part (Invalid upGrade!)" << std::endl << "----------------------------------------" << std::endl;
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
		"Six part (Valid form)" << std::endl << "----------------------------------------" << std::endl;
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
		"Seventh part (Invalid form constructor too low!)" << std::endl << "------------------------------------------------" << std::endl;
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
		"Eighth part (Invalid form constructor too high!)" << std::endl << "------------------------------------------------" << std::endl;
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
		"Ninth part (Invalid bureaucrat sign!)" << std::endl << "------------------------------------------------" << std::endl;
	Form form("form1", 1, 3);
	std::cout << form << std::endl;
	Bureaucrat bureaucrat("bureaucrat1", 1);
	bureaucrat.signForm(form);

	std::cout << "------------------------------------------------" << std::endl <<
		"Tenth part (Invalid form beSigned!)" << std::endl << "------------------------------------------------" << std::endl;
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

	std::cout << "End" << std::endl;
	return (0);
}
