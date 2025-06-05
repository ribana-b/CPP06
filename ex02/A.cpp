/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:39 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 20:10:54 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream> // For std::cout

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

A::A()
{
	OCF_MESSAGE("A Default constructor called");
}

A::~A()
{
	OCF_MESSAGE("A Destructor called");
}
