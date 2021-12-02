/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:05 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/02 17:18:57 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
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
	return (0);
}
