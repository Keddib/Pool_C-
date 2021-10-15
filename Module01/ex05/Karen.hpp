#ifndef KAREN_717_HPP
#define KAREN_717_HPP

#include <string>

class Karen
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		Karen();
		~Karen();
		void complain( std::string level );
};

void	uppercase(std::string &cmd);

#endif
