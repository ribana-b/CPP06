#ifndef PRINTER_H
# define PRINTER_H

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

#include <string>	// For std::string

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Printer
{
	public:
		static void	fromChar(const std::string& input);
		static void	fromInt(const std::string& input);
		static void	fromFloat(const std::string& input);
		static void	fromDouble(const std::string& input);

	private:
		Printer();
		~Printer();
		Printer(const Printer& that);
		Printer& operator=(const Printer& that);
};

#endif
