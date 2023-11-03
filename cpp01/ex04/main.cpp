#include <string>

void replaceFile(const std::string& filename, const std::string& s1, const std::string& s2);

int main()
{
	replaceFile("smth", "text", "anotherText");
	return 0;
}