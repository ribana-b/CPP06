/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:18 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:23:59 by ribana-b         ###   ########.com      */
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
	std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer Destructor called" << std::endl;
}

Serializer::Serializer(const Serializer&)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
}

Serializer&	Serializer::operator=(const Serializer&)
{
	std::cout << "Serializer Assignment operator called" << std::endl;
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
