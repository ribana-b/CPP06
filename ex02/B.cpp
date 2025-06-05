/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:39 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 20:11:50 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include <iostream> // For std::cout

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

B::B()
{
	OCF_MESSAGE("B Default constructor called");
}

B::~B()
{
	OCF_MESSAGE("B Destructor called");
}
