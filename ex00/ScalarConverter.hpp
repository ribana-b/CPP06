#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

#include <exception>	// For std::exception
#include <string>		// For std::string

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class ScalarConverter
{
	public:
		static void	convert(const std::string number);

		class UnknownTypeException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& that);
		ScalarConverter& operator=(const ScalarConverter& that);
};

#endif
