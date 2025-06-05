/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:38 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 18:05:40 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Parser.hpp"
#include "Printer.hpp"
#include <iostream> // For std::cout

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&)
{
	std::cout << "ScalarConverter Assignment operator called" << std::endl;
	return (*this);
}

void	ScalarConverter::convert(const std::string number)
{
	try
	{
		Parser::Type type = Parser::detectType(number);
		switch (type)
		{
			case Parser::SC_CHAR:
				Printer::fromChar(number);
				break;
			case Parser::SC_INT:
				Printer::fromInt(number);
				break;
			case Parser::SC_FLOAT:
				Printer::fromFloat(number);
				break;
			case Parser::SC_DOUBLE:
				Printer::fromDouble(number);
				break;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << "An exception ocurred. Reason: " << e.what() << std::endl;
	}
}
