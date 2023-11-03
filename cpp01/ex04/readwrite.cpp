#include <string>
#include <fstream>
#include <iostream>

void replaceFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::ifstream readFile;
	readFile.open(filename + ".txt");
	if (!readFile.is_open())
		std::cerr << "Error opening the input file." << std::endl;
	else
	{
		std::ofstream replaceFile;
		replaceFile.open(filename + ".replace");
		if (!replaceFile.is_open())
			std::cerr << "Error opening the output file." << std::endl;
		else
		{
			std::string line;
			while (std::getline(readFile, line))
			{
				size_t pos = line.find(s1);
				while (pos != std::string::npos)
				{
					line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
					pos = line.find(s1, pos + s1.length());
				}
				replaceFile << line << std::endl;
			}
		}
		readFile.close();
	}
}
