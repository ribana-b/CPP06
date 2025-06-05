/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:50 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 21:09:41 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Printer.hpp"
#include "Parser.hpp"
#include "CustomLimits.h"
#include <ios>		// For std::fixed
#include <iomanip>	// For std::setprecision
#include <iostream>	// For std::cout
#include <cstdlib>	// For std::atoi, std::atof

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

Printer::Printer()
{
	OCF_MESSAGE("Printer Default constructor called");
}

Printer::~Printer()
{
	OCF_MESSAGE("Printer Destructor called");
}

Printer::Printer(const Printer&)
{
	OCF_MESSAGE("Printer Copy constructor called");
}

Printer&	Printer::operator=(const Printer&)
{
	OCF_MESSAGE("Printer Assignment operator called");
	return (*this);
}

void	Printer::fromChar(const std::string& input)
{
	char value = input[0];
	int valueAsInt = static_cast<int>(value);
	float valueAsFloat = static_cast<float>(value);
	double valueAsDouble = static_cast<double>(value);

	std::cout << "Char: " << value << std::endl;
	std::cout << "Int: " << valueAsInt << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Float: " << valueAsFloat << "f" << std::endl;
	std::cout << "Double: " << valueAsDouble << std::endl;
}

void	Printer::fromInt(const std::string& input)
{
	int value = std::atoi(input.c_str());
	char valueAsChar = static_cast<char>(value);
	float valueAsFloat = static_cast<float>(value);
	double valueAsDouble = static_cast<double>(value);

	if (value < MIN_PRINTABLE_CHAR || value > MAX_PRINTABLE_CHAR)
	{
		std::cout << "Char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "Char: " << valueAsChar << std::endl;
	}
	std::cout << "Int: " << value << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Float: " << valueAsFloat << "f" << std::endl;
	std::cout << "Double: " << valueAsDouble << std::endl;
}

void	Printer::fromFloat(const std::string& input)
{
	float value = static_cast<float>(std::atof(input.c_str()));
	char valueAsChar = static_cast<char>(value);
	int valueAsInt = static_cast<int>(value);
	double valueAsDouble = static_cast<double>(value);

	if (Parser::isPseudoLiteralFloat(input))
	{
		std::cout << "Char: Impossible" << std::endl;
		std::cout << "Int: Impossible" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "Float: " << value << "f" << std::endl;
		std::cout << "Double: " << valueAsDouble << std::endl;
	}
	else
	{
		long int valueAsLongInt = static_cast<long int>(value);
		if (valueAsLongInt < MIN_PRINTABLE_CHAR || valueAsLongInt > MAX_PRINTABLE_CHAR)
		{
			std::cout << "Char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "Char: " << valueAsChar << std::endl;
		}
		if (valueAsLongInt < MIN_INT || valueAsLongInt > MAX_INT)
		{
			std::cout << "Int: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "Int: " << valueAsInt << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1) << "Float: " << value << "f" << std::endl;
		std::cout << "Double: " << valueAsDouble << std::endl;
	}
}

void	Printer::fromDouble(const std::string& input)
{
	double value = std::atof(input.c_str());
	char valueAsChar = static_cast<char>(value);
	int valueAsInt = static_cast<int>(value);
	float valueAsFloat = static_cast<float>(value);

	if (Parser::isPseudoLiteralDouble(input))
	{
		std::cout << "Char: Impossible" << std::endl;
		std::cout << "Int: Impossible" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "Float: " << valueAsFloat << "f" << std::endl;
		std::cout << "Double: " << value << std::endl;
	}
	else
	{
		long int valueAsLongInt = static_cast<long int>(value);
		if (valueAsLongInt < MIN_PRINTABLE_CHAR || valueAsLongInt > MAX_PRINTABLE_CHAR)
		{
			std::cout << "Char: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "Char: " << valueAsChar << std::endl;
		}
		if (valueAsLongInt < MIN_INT || valueAsLongInt > MAX_INT)
		{
			std::cout << "Int: Non displayable" << std::endl;
		}
		else
		{
			std::cout << "Int: " << valueAsInt << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1) << "Float: " << valueAsFloat << "f" << std::endl;
		std::cout << "Double: " << value << std::endl;
	}
}
