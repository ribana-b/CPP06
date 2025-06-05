/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:34:18 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 21:03:58 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream> // For std::cout, std::cerr

// Helper macro to pretty-print tests
#define PP_TEST(testIndex) do{\
	std::string testName((__func__));\
	std::cout << "\033[38;2;255;128;255m- Test " << (testIndex)\
	<< " (" << testName.substr(4) << "):\033[0m" << std::endl;\
} while(0)

void	testIdentifyFromGeneratedBase(std::size_t testIndex)
{
	PP_TEST(testIndex);
	Base base;
	Base* randomBase = base.generate();

	base.identify(randomBase);

	delete randomBase;
}

void	testIdentifyPointerToA(std::size_t testIndex)
{
	PP_TEST(testIndex);

	A a;
	Base base;

	base.identify(&a);
}

void	testIdentifyPointerToB(std::size_t testIndex)
{
	PP_TEST(testIndex);

	B b;
	Base base;

	base.identify(&b);
}

void	testIdentifyPointerToC(std::size_t testIndex)
{
	PP_TEST(testIndex);

	C c;
	Base base;

	base.identify(&c);
}

void	testIdentifyPointerToBase(std::size_t testIndex)
{
	PP_TEST(testIndex);

	Base base;

	base.identify(&base);
}

void	testIdentifyReferenceToA(std::size_t testIndex)
{
	PP_TEST(testIndex);

	A a;
	Base base;

	base.identify(a);
}

void	testIdentifyReferenceToB(std::size_t testIndex)
{
	PP_TEST(testIndex);

	B b;
	Base base;

	base.identify(b);
}

void	testIdentifyReferenceToC(std::size_t testIndex)
{
	PP_TEST(testIndex);

	C c;
	Base base;

	base.identify(c);
}

void	testIdentifyReferenceToBase(std::size_t testIndex)
{
	PP_TEST(testIndex);

	Base base;

	base.identify(base);
}

int	main()
{
	std::size_t testIndex = 0;

	testIdentifyFromGeneratedBase(testIndex++);

	testIdentifyPointerToA(testIndex++);
	testIdentifyPointerToB(testIndex++);
	testIdentifyPointerToC(testIndex++);
	testIdentifyPointerToBase(testIndex++);

	testIdentifyReferenceToA(testIndex++);
	testIdentifyReferenceToB(testIndex++);
	testIdentifyReferenceToC(testIndex++);
	testIdentifyReferenceToBase(testIndex++);

	return (0);
}
