#ifndef PMERGEME_H
# define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <climits>
#include <iomanip>

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
			std::vector<int> getVector();
			std::deque<int> getDeque();
			
			
			template <typename T>

			void swap(T &a, T &b)
			{
				T tmp = a;
				a = b;
				b = tmp;
			}


			template <typename Iterator>

			void insert(Iterator first, Iterator last)
			{
				for (Iterator i = first + 1; i != last; ++i)
    				{
        				for (Iterator j = i; j != first && *j < *(j - 1); --j)
        					{
            						swap(*j, *(j - 1));
        					}
    				}			
			}


			template <class Container, class Iterator>


			void merge(Container &cont, Iterator first, Iterator last)
			{
    				int size = last - first;
    				if (size <= 1)
    				{
        				if (*first > *last)
        					{
            						swap(first, last);
        					}
    				}
    				else if (size <= 16)
    				{
        				insert(first, last + 1);
    				}
    				else
    				{
        				Iterator middle = first + (size / 2);
        				merge(cont, middle + 1, last);
        				merge(cont, first, middle);
        				insert(first, last);
    				}
			}


			template <class Container>

                        double chrono(Container &cont)
                        {
                                std::clock_t    start;
                                std::clock_t    end;
				
				start = clock();

                                merge(cont, cont.begin(), (--cont.end()));
                                end = clock();
                                return(static_cast<double>(end-start) / CLOCKS_PER_SEC *1000000);
                        }









};

#endif
			
