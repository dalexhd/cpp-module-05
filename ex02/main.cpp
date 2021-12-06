/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:05 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 11:34:48 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << "--------------------------------------------" << std::endl <<
		"1: part (Presedential Grade Low Error)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm presidentialForm("trump");
		std::cout << presidentialForm << std::endl;
		Bureaucrat presedentialBureaucrat("presedentialBureaucrat", 4);
		presidentialForm.beSigned(presedentialBureaucrat);
		presidentialForm.execute(presedentialBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"2: part (Presedential Grade Not signed Error)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm presidentialForm("trump");
		std::cout << presidentialForm << std::endl;
		Bureaucrat presedentialBureaucrat("presedentialBureaucrat", 4);
		presidentialForm.execute(presedentialBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"3: part (Presedential Pardon Okay)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm presidentialForm("trump");
		std::cout << presidentialForm << std::endl;
		Bureaucrat presedentialBureaucrat("presedentialBureaucrat", 5);
		presidentialForm.beSigned(presedentialBureaucrat);
		presidentialForm.execute(presedentialBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	////////////////////////////////////////////////

	std::cout << "--------------------------------------------" << std::endl <<
		"4: part (Robotomy Grade Low Error)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm robotomyRequestForm("trump");
		std::cout << robotomyRequestForm << std::endl;
		Bureaucrat robotomyBureaucrat("robotomyBureaucrat", 4);
		robotomyRequestForm.beSigned(robotomyBureaucrat);
		robotomyRequestForm.execute(robotomyBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"5: part (Robotomy Grade Not signed Error)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm robotomyRequestForm("trump");
		std::cout << robotomyRequestForm << std::endl;
		Bureaucrat robotomyBureaucrat("robotomyBureaucrat", 4);
		robotomyRequestForm.execute(robotomyBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"6: part (Robotomy Pardon Okay)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm robotomyRequestForm("trump");
		std::cout << robotomyRequestForm << std::endl;
		Bureaucrat robotomyBureaucrat("robotomyBureaucrat", 45);
		robotomyRequestForm.beSigned(robotomyBureaucrat);
		robotomyRequestForm.execute(robotomyBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	////////////////////////////////////////////////
	std::cout << "--------------------------------------------" << std::endl <<
		"5: part (Shrubbery Grade Low Error)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm shrubberyRequestForm("trump");
		std::cout << shrubberyRequestForm << std::endl;
		Bureaucrat shrubberyBureaucrat("shrubberyBureaucrat", 4);
		shrubberyRequestForm.beSigned(shrubberyBureaucrat);
		shrubberyRequestForm.execute(shrubberyBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"6: part (Shrubbery Grade Not signed Error)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm shrubberyRequestForm("trump");
		std::cout << shrubberyRequestForm << std::endl;
		Bureaucrat shrubberyBureaucrat("shrubberyBureaucrat", 4);
		shrubberyRequestForm.execute(shrubberyBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}

	std::cout << "--------------------------------------------" << std::endl <<
		"7: part (Shrubbery Pardon Okay)" << std::endl << "--------------------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm shrubberyRequestForm("trump");
		std::cout << shrubberyRequestForm << std::endl;
		Bureaucrat shrubberyBureaucrat("shrubberyBureaucrat", 137);
		shrubberyRequestForm.beSigned(shrubberyBureaucrat);
		shrubberyRequestForm.execute(shrubberyBureaucrat);
	}
	catch(std::exception & e)
	{
		std::cerr << C_RED << e.what() << C_X << '\n';
	}
	std::cout << "---------------------------End---------------------------" << std::endl;
	return (0);
}
