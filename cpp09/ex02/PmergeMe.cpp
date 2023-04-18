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
	std::vector<int>::iterator iter;
	for(iter = this->_vector.begin(); iter != this->_vector.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printDeque()
{
	std::deque<int>::iterator iter;
	for(iter = this->_deque.begin(); iter != this->_deque.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

std::vector<int> PmergeMe::getVector()
{
	return this->_vector;
}

std::deque<int> PmergeMe::getDeque()
{
	return this->_deque;
}

void PmergeMe::exec(char **argv)
{
	double			vector_time;
	double			deque_time;
	int				number;
	
	for(int i = 0; argv[i] != 0; ++i)
	{
		validateNum(argv[i]);
		std::istringstream(argv[i]) >> number;
		this->_vector.push_back(number);
		this->_deque.push_back(number);
	}

	std::cout << "Before: ";
	printVector();
	vector_time = chrono(this->_vector);
	deque_time = chrono(this->_deque);
	std::cout << "After: ";
	printDeque();
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(5);
	std::cout << "Time to process a range of " << this->_vector.size() << " elements with std::vector : " << vector_time << " us\n";
	std::cout << "Time to process a range of " << this->_deque.size() << " elements with std::deque : " << deque_time << " us\n";
}






