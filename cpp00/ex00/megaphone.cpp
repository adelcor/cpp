#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for(size_t x = 0; x < str.length(); x++)
				std::cout << (char)std::toupper(str[x]);
		}
		std::cout << std::endl;
	}
	return(0);
}
