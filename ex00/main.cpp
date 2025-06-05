/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:34:18 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:04:02 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream> // For std::cout, std::cerr

// Helper macro to pretty-print tests
#define PP_TEST(testIndex) do{\
	std::string testName((__func__));\
	std::cout << "\033[38;2;255;128;255m- Test " << (testIndex)\
	<< " (" << testName.substr(4) << "):\033[0m" << std::endl;\
} while(0)

// Helper macro to pretty-print caught exceptions
#define PP_EXCEPTION(exception) do{\
	std::cerr << "\033[31m" << (__FILE__) << ":" << (__LINE__) << "\033[0m"\
	<< ": Exception caught. Reason:\033[0m " << (exception).what() << std::endl;\
} while(0)

void	testCharNumbers(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("0");
	ScalarConverter::convert("1");
	ScalarConverter::convert("2");
	ScalarConverter::convert("3");
	ScalarConverter::convert("4");
	ScalarConverter::convert("5");
	ScalarConverter::convert("6");
	ScalarConverter::convert("7");
	ScalarConverter::convert("8");
	ScalarConverter::convert("9");
}

void	testCharLetters(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("a");
	ScalarConverter::convert("b");
	ScalarConverter::convert("c");
	ScalarConverter::convert("d");
	ScalarConverter::convert("e");
	ScalarConverter::convert("f");
	ScalarConverter::convert("g");
	ScalarConverter::convert("h");
	ScalarConverter::convert("i");
	ScalarConverter::convert("j");
	ScalarConverter::convert("k");
	ScalarConverter::convert("l");
	ScalarConverter::convert("m");
	ScalarConverter::convert("n");
	ScalarConverter::convert("o");
	ScalarConverter::convert("p");
	ScalarConverter::convert("q");
	ScalarConverter::convert("r");
	ScalarConverter::convert("s");
	ScalarConverter::convert("t");
	ScalarConverter::convert("u");
	ScalarConverter::convert("v");
	ScalarConverter::convert("w");
	ScalarConverter::convert("x");
	ScalarConverter::convert("y");
	ScalarConverter::convert("z");
}

void	testCharSymbols(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("!");
	ScalarConverter::convert("\"");
	ScalarConverter::convert("·");
	ScalarConverter::convert("$");
	ScalarConverter::convert("%");
	ScalarConverter::convert("&");
	ScalarConverter::convert("/");
	ScalarConverter::convert(")");
	ScalarConverter::convert("=");
	ScalarConverter::convert("+");
	ScalarConverter::convert("-");
	ScalarConverter::convert(".");
	ScalarConverter::convert(":");
	ScalarConverter::convert(";");
	ScalarConverter::convert("\\");
}

void	testIntSingleDigit(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("00");
	ScalarConverter::convert("01");
	ScalarConverter::convert("02");
	ScalarConverter::convert("03");
	ScalarConverter::convert("04");
	ScalarConverter::convert("05");
	ScalarConverter::convert("06");
	ScalarConverter::convert("07");
	ScalarConverter::convert("08");
	ScalarConverter::convert("09");
}

void	testIntTwoDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("10");
	ScalarConverter::convert("23");
	ScalarConverter::convert("35");
	ScalarConverter::convert("42");
	ScalarConverter::convert("58");
	ScalarConverter::convert("64");
	ScalarConverter::convert("79");
	ScalarConverter::convert("86");
	ScalarConverter::convert("91");
}

void	testIntNineDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("103825382");
	ScalarConverter::convert("233825379");
	ScalarConverter::convert("353825383");
	ScalarConverter::convert("423825482");
	ScalarConverter::convert("583825359");
	ScalarConverter::convert("643825382");
	ScalarConverter::convert("793825329");
	ScalarConverter::convert("863773350");
	ScalarConverter::convert("913702381");
}

void	testIntMinValue(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("-2147483648");
}

void	testIntMaxValue(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("2147483647");
}

void	testIntMinValueMinusOne(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("-2147483649");
}

void	testIntMaxValuePlusOne(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("2147483648");
}

void	testFloatOneDigit(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("0f");
	ScalarConverter::convert("1.f");
	ScalarConverter::convert("2.0f");
	ScalarConverter::convert("3f");
	ScalarConverter::convert("4f");
	ScalarConverter::convert("5f");
	ScalarConverter::convert("6f");
	ScalarConverter::convert("7f");
	ScalarConverter::convert("8f");
	ScalarConverter::convert("9f");
}

void	testFloatTwoDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("10f");
	ScalarConverter::convert("23f");
	ScalarConverter::convert("35f");
	ScalarConverter::convert("42f");
	ScalarConverter::convert("58f");
	ScalarConverter::convert("64f");
	ScalarConverter::convert("79f");
	ScalarConverter::convert("86f");
	ScalarConverter::convert("91f");
}

void	testFloatFiveDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("10382f");
	ScalarConverter::convert("23382f");
	ScalarConverter::convert("35382f");
	ScalarConverter::convert("42382f");
	ScalarConverter::convert("58382f");
	ScalarConverter::convert("64382f");
	ScalarConverter::convert("79382f");
	ScalarConverter::convert("86377f");
	ScalarConverter::convert("91370f");
}

void	testDoubleOneDigit(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("0.");
	ScalarConverter::convert("1.0");
	ScalarConverter::convert("2.");
	ScalarConverter::convert("3.");
	ScalarConverter::convert("4.0");
	ScalarConverter::convert("5.");
	ScalarConverter::convert("6.0");
	ScalarConverter::convert("7.");
	ScalarConverter::convert("8.0");
	ScalarConverter::convert("9.");
}

void	testDoubleTwoDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("10.0");
	ScalarConverter::convert("23.0");
	ScalarConverter::convert("35.0");
	ScalarConverter::convert("42.0");
	ScalarConverter::convert("58.0");
	ScalarConverter::convert("64.0");
	ScalarConverter::convert("79.0");
	ScalarConverter::convert("86.0");
	ScalarConverter::convert("91.0");
}

void	testDoubleNineDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("103825382.0");
	ScalarConverter::convert("233825379.0");
	ScalarConverter::convert("353825383.0");
	ScalarConverter::convert("423825482.0");
	ScalarConverter::convert("583825359.0");
	ScalarConverter::convert("643825382.0");
	ScalarConverter::convert("793825329.0");
	ScalarConverter::convert("863773350.0");
	ScalarConverter::convert("913702381.0");
}

void	testDoubleTwelveDigits(std::size_t testIndex)
{
	PP_TEST(testIndex);

	ScalarConverter::convert("10323825382.0");
	ScalarConverter::convert("23323823047.0");
	ScalarConverter::convert("35323805370.0");
	ScalarConverter::convert("42323825482.0");
	ScalarConverter::convert("58323825359.0");
	ScalarConverter::convert("64323825382.0");
	ScalarConverter::convert("79323825329.0");
	ScalarConverter::convert("86323773350.0");
	ScalarConverter::convert("91323702381.0");
}

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}

	std::size_t testIndex = 0;

	testCharNumbers(testIndex++);
	testCharLetters(testIndex++);
	testCharSymbols(testIndex++);

	testIntSingleDigit(testIndex++);
	testIntTwoDigits(testIndex++);
	testIntNineDigits(testIndex++);
	testIntMinValue(testIndex++);
	testIntMaxValue(testIndex++);
	testIntMinValueMinusOne(testIndex++);
	testIntMaxValuePlusOne(testIndex++);

	testFloatOneDigit(testIndex++);
	testFloatTwoDigits(testIndex++);
	testFloatFiveDigits(testIndex++);

	testDoubleOneDigit(testIndex++);
	testDoubleTwoDigits(testIndex++);
	testDoubleNineDigits(testIndex++);
	testDoubleTwelveDigits(testIndex++);

	return (0);
}
