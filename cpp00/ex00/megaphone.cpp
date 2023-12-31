/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:50:47 by aivanyan          #+#    #+#             */
/*   Updated: 2023/11/02 22:53:17 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void str_toupper(char *str)
{
	while (*str)
	{
		*str = std::toupper(static_cast<unsigned char>(*str));
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (*(++argv))
		{
			str_toupper(*argv);
			std::cout << *argv << " ";
		}
	}
	std::cout << std::endl;
}
