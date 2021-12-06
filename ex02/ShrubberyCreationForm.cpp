/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:47:32 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/06 12:15:19 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

char const *ShrubberyCreationForm::TemplateFileName::what() const throw()
{
	return ("trees file out is same as template!");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ifstream in_stream;
	std::ofstream out_stream;
	std::string content;
	std::string str;
	const std::string readfile = "shrubbery_template";
	const std::string destFile = this->getTarget() + "_shrubbery";

	if (executor.getGrade() > this->neededGrade())
		throw GradeTooLowException();
	else if (!this->isSigned())
		throw NotSigned();
	else if (this->getTarget() == readfile)
		throw TemplateFileName();
	in_stream.open(readfile);
	if (in_stream.fail())
	{
		in_stream.close();
		throw FileError("Could not open " + readfile + " file.");
	}
	while (std::getline(in_stream, str))
		content += str + "\n";
	out_stream.open(destFile);
	if (out_stream.fail())
	{
		out_stream.close();
		throw FileError("Could not open file " + destFile + " file.");
	}
	out_stream << content;
	out_stream.close();
	in_stream.close();
	std::cout << C_GREEN << destFile << " trees file generated!" << C_X << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}
