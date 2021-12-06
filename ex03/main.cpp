/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:05 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 18:07:23 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	someRandomIntern;
	Form* rrf;

	std::cout << "--------------------------------------------" << std::endl <<
		"1: part (Robotomy good form example)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"2: part (President good form example)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"3: part (Shrubbery good form example)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	//////////////////////////////////////

	std::cout << "--------------------------------------------" << std::endl <<
		"4: part (bad name example)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("robotomybad request", "Bender");
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}
	std::cout << "---------------------------End---------------------------" << std::endl;
	return (0);
}
