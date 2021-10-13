#include <fstream>
#include <iostream>

int ft_error()
{
	std::cout << "Argument: error\n";
	return (1);
}

void	replaceLine(std::string &l, const std::string &s1, const std::string &s2)
{
	typedef std::string::iterator iter;
	while (1)
	{
		size_t found = l.find(s1);
		if (found == std::string::npos)
			break ;
		iter isert = l.erase(l.begin() + found, l.end() + s1.size());
		l.insert(isert, s2.begin(), s2.end());
		std::cout << l + "\n";
		
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return ft_error();
	std::fstream inFile;
	std::string Line;
	inFile.open(argv[1]);
	if (inFile.is_open())
	{
		std::string Line;
		while (!inFile.eof())
		{
			Line.clear();
			getline(inFile, Line);
			replaceLine(Line, argv[2], argv[3]);
			//put line on file
			// std::cout << Line + '\n';
		}
		inFile.close();
	}
	else
		std::cout << "Could not open file \n";
	return (0);
}
