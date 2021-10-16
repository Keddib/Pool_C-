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
	size_t found = l.find(s1, 0);
	while (found != std::string::npos)
	{
		iter isert = l.erase(l.begin() + found, l.begin() + found + s1.size());
		l.insert(isert, s2.begin(), s2.end());
		found = l.find(s1, found + s2.size());
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return ft_error();
	std::ifstream inFile;
	std::ofstream outFile;
	std::string Line;
	inFile.open(argv[1]);
	outFile.open(std::string(argv[1]) + ".replaced");
	if (inFile.is_open() && outFile.is_open())
	{
		std::string Line;
		while (getline(inFile, Line))
		{
			replaceLine(Line, argv[2], argv[3]);
			outFile << Line + '\n';
			Line.clear();
		}
		inFile.close();
		outFile.close();
	}
	else
		std::cout << "Could not open file \n";
	return (0);
}
