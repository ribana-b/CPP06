/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:44 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 18:05:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

#include <exception>	// For std::exception
#include <string>		// For std::string

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class ScalarConverter
{
	public:
		static void	convert(const std::string number);

		class UnknownTypeException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& that);
		ScalarConverter& operator=(const ScalarConverter& that);
};

#endif
