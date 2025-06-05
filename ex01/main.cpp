/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:34:18 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:59:15 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream> // For std::cout, std::cerr

// Helper macro to pretty-print tests
#define PP_TEST(testIndex) do{\
	std::string testName((__func__));\
	std::cout << "\033[38;2;255;128;255m- Test " << (testIndex)\
	<< " (" << testName.substr(4) << "):\033[0m" << std::endl;\
} while(0)

void	testSerializeSameDataFromStack(std::size_t testIndex)
{
	PP_TEST(testIndex);

	Data data;
	uintptr_t raw = Serializer::serialize(&data);
	if (&data == Serializer::deserialize(raw))
	{
		std::cout << "Serialize worked successfully!" << std::endl;
	}
	else
	{
		std::cout << "Failed me!" << std::endl;
	}
}

void	testSerializeSameDataFromHeap(std::size_t testIndex)
{
	PP_TEST(testIndex);

	Data* data = new Data();
	uintptr_t raw = Serializer::serialize(data);
	if (data == Serializer::deserialize(raw))
	{
		std::cout << "Serialize worked successfully!" << std::endl;
	}
	else
	{
		std::cout << "Failed me!" << std::endl;
	}

	delete data;
}

void	testSerializeNullData(std::size_t testIndex)
{
	PP_TEST(testIndex);

	Data* data = NULL;
	uintptr_t raw = Serializer::serialize(data);
	if (data == Serializer::deserialize(raw))
	{
		std::cout << "Serialize worked successfully!" << std::endl;
	}
	else
	{
		std::cout << "Failed me!" << std::endl;
	}
}

void	testSerializeDifferentData(std::size_t testIndex)
{
	PP_TEST(testIndex);

	Data data1;
	Data data2;

	uintptr_t raw1 = Serializer::serialize(&data1);

	if (Serializer::deserialize(raw1) == &data2)
	{
		std::cout << "They are the same" << std::endl;
	}
	else
	{
		std::cerr << raw1 << " != " << reinterpret_cast<uintptr_t>(&data2) << std::endl;
	}
}

int	main()
{
	std::size_t testIndex = 0;

	testSerializeSameDataFromStack(testIndex++);
	testSerializeSameDataFromHeap(testIndex++);
	testSerializeNullData(testIndex++);
	testSerializeDifferentData(testIndex++);

	return (0);
}
