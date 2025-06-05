/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:29 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 21:08:53 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"
#include "CustomLimits.h"
#include <iostream>	// For std::cout
#include <cstdlib>	// For std::atol

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

Parser::Parser()
{
	OCF_MESSAGE("Parser Default constructor called");
}

Parser::~Parser()
{
	OCF_MESSAGE("Parser Destructor called");
}

Parser::Parser(const Parser&)
{
	OCF_MESSAGE("Parser Copy constructor called");
}

Parser&	Parser::operator=(const Parser&)
{
	OCF_MESSAGE("Parser Assignment operator called");
	return (*this);
}

bool	Parser::isPseudoLiteralFloat(const std::string& s)
{
	return (s == "nanf" || s == "inff" || s == "-inff" || s == "+inff");
}

bool	Parser::isPseudoLiteralDouble(const std::string& s)
{
	return (s == "nan" || s == "inf" || s == "-inf" || s == "+inf");
}

std::size_t	Parser::getNumberEndIndex(const std::string& input)
{
	const std::string validChars = "0123456789";

	std::size_t i = 0;
	std::size_t inputSize = input.size();
	for (; i < inputSize; ++i)
	{
		if (validChars.find(input[i]) == std::string::npos)
		{
			return (i);
		}
	}
	return (i);
}

Parser::Type Parser::parseInput(const std::string& input)
{
	std::string temp = input;
	if (temp[0] == '+' || temp[0] == '-')
	{
		temp = temp.substr(1);
	}
	std::size_t tempSize = temp.size();
	
	std::size_t i = getNumberEndIndex(temp);
	if (i == tempSize)
	{
		long int inputAsLongInt = std::atol(input.c_str());
		if (inputAsLongInt < MIN_INT || inputAsLongInt > MAX_INT)
		{
			throw (Parser::UnknownTypeException());
		}
		return (SC_INT);
	}

	if (temp[i] == '.')
	{
		temp = temp.substr(i + 1);

		std::size_t j = getNumberEndIndex(temp);
		if (i + j + 1 == tempSize)
		{
			return (SC_DOUBLE);
		}
		else if (temp[j] == 'f')
		{
			temp = temp.substr(j);
			if (temp.size() == 1)
			{
				return (SC_FLOAT);
			}
		}
	}
	else if (temp[i] == 'f')
	{
		temp = temp.substr(i);
		if (temp.size() == 1)
		{
			return (SC_FLOAT);
		}
	}

	throw (Parser::UnknownTypeException());
}

Parser::Type	Parser::detectType(const std::string& input)
{
	std::size_t inputSize = input.size();
	if (inputSize == 1)
	{
		return (SC_CHAR);
	}

	if (isPseudoLiteralFloat(input))
	{
		return (SC_FLOAT);
	}
	else if (isPseudoLiteralDouble(input))
	{
		return (SC_DOUBLE);
	}

	return (parseInput(input));
}

const char*	Parser::UnknownTypeException::what() const throw()
{
	return ("Unknown type");
}
