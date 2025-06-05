/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:34 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:57:24 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
# define PARSER_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

#include <exception>	// For std::exception
#include <string>		// For std::string

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Parser
{
	public:
		// C++98 doesn't allow nested enums
		typedef int Type;

		static const Type SC_CHAR	= 0;
		static const Type SC_INT	= 1;
		static const Type SC_FLOAT	= 2;
		static const Type SC_DOUBLE	= 3;

		static std::size_t	getNumberEndIndex(const std::string& input);
		static Type parseInput(const std::string& input);
		static bool	isPseudoLiteralFloat(const std::string& s);
		static bool	isPseudoLiteralDouble(const std::string& s);
		static Type	detectType(const std::string& input);

		class UnknownTypeException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:
		Parser();
		~Parser();
		Parser(const Parser& that);
		Parser& operator=(const Parser& that);
};

#endif
