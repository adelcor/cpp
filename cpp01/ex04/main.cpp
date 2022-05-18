#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string	filename;
	std::string	temp;
	std::string	aux;
	int	len;
	len = 0;

	if(argc != 4)
	{
		std::cerr << "Incorrect number of arguments";
		len = 1;
		exit(len);
	}
	else
	{
		infile.open(argv[1], std::ios::in);
		if (!infile)
		{
			std::cerr << "File does not exist";
			exit(1);
		}
		if (!(infile.good()))
		{
			std::cerr << "Error handling infile";
			exit(1);
		}
		filename = argv[1];
		filename.append(".replace");
		len = strlen(argv[2]);
		outfile.open(filename, std::ios::trunc);
		while(infile.good())
		{
			std::getline(infile, aux, ' ');
			if (aux.compare(argv[2]) == 0)
				outfile << argv[3] << ' ';
			else
				outfile << aux << ' ';
		}
		infile.close();
		outfile.close();
	}
	return(0);
}
