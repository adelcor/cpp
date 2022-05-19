#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	if (argc == 2)
		karen.complain(argv[1]);
	else
		karen.complain("irrelevant string");
	return(EXIT_SUCCESS);
}

