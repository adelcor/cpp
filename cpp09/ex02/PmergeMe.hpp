#ifndef PMERGEME_H
# define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>

class PmergeMe
{
	private:
			std::vector<int> _vector;
			std::deque<int> _deque;

	public:
			PmergeMe();
			PmergeMe(const PmergeMe &copy);
			PmergeMe &operator=(const PmergeMe &origin);
			~PmergeMe();

			void	exec(char **argv);
			void	validateNum(const char *arg);
			void	printVector();
			void	printDeque();
			bool	isDuplicate();

};

#endif
			
