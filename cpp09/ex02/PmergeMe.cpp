#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	this->_vector = copy._vector;
	this->_deque = copy._deque;
	return(*this);
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::validateNum(const char *arg)
{
	std::string str;
	long		number;

	str = arg;

    for (size_t i = 0; i < str.length(); i++)
    {
        if(!std::isdigit(str[i]))
            throw std::invalid_argument("the argument is not a positive number");
    }
	
	std::istringstream(arg) >> number;

	if (number < 0)
		throw std::invalid_argument("the argument is not a positive number");
	if (str.length() > 10 || (number > INT_MAX))
		throw std::invalid_argument("number too long");
}
				



void PmergeMe::printVector()
{
	std::cout << "Vector: ";
	std::vector<int>::iterator iter;
	for(iter = this->_vector.begin(); iter != this->_vector.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printDeque()
{
	std::cout << "Deque: ";
	std::deque<int>::iterator iter;
	for(iter = this->_deque.begin(); iter != this->_deque.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

bool PmergeMe::isDuplicate()
{
	for(size_t i = 0; i < this->_vector.size(); ++i)
	{
		for(size_t j = i + 1; j < this->_vector.size(); ++j)
		{
			if(this->_vector[i] == this->_vector[j])
				return true;
		}
	}
	return false;
}


void PmergeMe::exec(char **argv)
{
//	std::clock_t	start;
//	std::clock_t	end;
//	double			vtime;
//	double			dtime;
	int				number;
	
	for(int i = 0; argv[i] != 0; ++i)
	{
		validateNum(argv[i]);
		std::istringstream(argv[i]) >> number;
		this->_vector.push_back(number);
		this->_deque.push_back(number);
	}

	if(isDuplicate())
	{
		std::cout << "Duplicated numbers" << std::endl;
		exit(0);
	}

	printVector();
	printDeque();

}






