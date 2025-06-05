/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:39 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:56:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

Data::Data() :
	x(42)
{
	OCF_MESSAGE("Data Default constructor called");
}

Data::~Data()
{
	OCF_MESSAGE("Data Destructor called");
}

Data::Data(const Data&)
{
	OCF_MESSAGE("Data Copy constructor called");
}

Data&	Data::operator=(const Data&)
{
	OCF_MESSAGE("Data Assignment operator called");
	return (*this);
}

int	Data::getX() const
{
	return (x);
}
