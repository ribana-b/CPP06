#ifndef PARSER_H
# define PARSER_H

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

#include <exception>	// For std::exception
#include <string>		// For std::string

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Parser
{
	public:
		Parser();
		~Parser();
		Parser(const Parser& that);
		Parser& operator=(const Parser& that);

		// C++98 doesn't allow nested classes
		typedef int Type;

		static const Type SC_CHAR	= 0;
		static const Type SC_INT	= 1;
		static const Type SC_FLOAT	= 2;
		static const Type SC_DOUBLE	= 3;

		static std::size_t	getNumberEndIndex(const std::string& input);
		static Type parseInput(const std::string& input);
		static bool	isPseudoLiteralFloat(const std::string& s);
		static bool	isPseudoLiteralDouble(const std::string& s);
		static Type	detectType(const std::string& input);

		class UnknownTypeException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

#endif
