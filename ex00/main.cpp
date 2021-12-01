/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:32:05 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/01 20:07:49 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat one("one", 100);
	std::cout << "Level: " << std::to_string(one.getGrade()) << std::endl;
	one.levelDownGrade();
	std::cout << "Level: " << std::to_string(one.getGrade()) << std::endl;
	return 0;
}
