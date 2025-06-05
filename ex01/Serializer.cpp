/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:18 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 21:07:53 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

Serializer::Serializer()
{
	OCF_MESSAGE("Serializer Default constructor called");
}

Serializer::~Serializer()
{
	OCF_MESSAGE("Serializer Destructor called");
}

Serializer::Serializer(const Serializer&)
{
	OCF_MESSAGE("Serializer Copy constructor called");
}

Serializer&	Serializer::operator=(const Serializer&)
{
	OCF_MESSAGE("Serializer Assignment operator called");
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
