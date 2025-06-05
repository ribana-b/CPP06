/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:39 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 21:05:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream> // For std::cout
#include <cstdlib> // For rand, time

class A;
class B;
class C;

// Helper macro to turn off OCF messages
#ifdef QUIET
# define OCF_MESSAGE(X)
#else
# define OCF_MESSAGE(X) std::cout << (X) << std::endl
#endif

Base::Base()
{
	OCF_MESSAGE("Base Default constructor called");
}

Base::~Base()
{
	OCF_MESSAGE("Base Destructor called");
}

Base::Base(const Base&)
{
	OCF_MESSAGE("Base Copy constructor called");
}

Base&	Base::operator=(const Base&)
{
	OCF_MESSAGE("Base Assignment operator called");
	return (*this);
}

Base*	Base::generate()
{
	srand(time(NULL));
	int randomNumber = rand() % 3;
	if (randomNumber == 0)
	{
		return (new A);
	}
	else if (randomNumber == 1)
	{
		return (new B);
	}
	else if (randomNumber == 2)
	{
		return (new C);
	}

	// Unreachable
	return (NULL);
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "The pointer " << p << " is type A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "The pointer " << p << " is type B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "The pointer " << p << " is type C" << std::endl;
	}
	else
	{
		std::cout << "The pointer is not A, B or C" << std::endl;
	}
}

void	Base::identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "The reference " << &p << " is type A" << std::endl;
	}
	catch (const std::exception&)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "The reference " << &p << " is type B" << std::endl;
		}
		catch (const std::exception&)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "The reference " << &p << " is type C" << std::endl;
			}
			catch (const std::exception&)
			{
				std::cerr << "The reference " << &p << " is not A, B or C" << std::endl;
			}
		}
	}
}
