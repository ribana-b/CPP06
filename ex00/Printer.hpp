/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:57 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:57:28 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_HPP
# define PRINTER_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

#include <string>	// For std::string

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Printer
{
	public:
		static void	fromChar(const std::string& input);
		static void	fromInt(const std::string& input);
		static void	fromFloat(const std::string& input);
		static void	fromDouble(const std::string& input);

	private:
		Printer();
		~Printer();
		Printer(const Printer& that);
		Printer& operator=(const Printer& that);
};

#endif
