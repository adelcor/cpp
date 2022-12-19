/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:20:56 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/19 15:22:19 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>

class Array
{
	private: 
		T	*_array;
		unsigned int _size;

	public:

		Array(): _size(0)
		{
			std::cout << "Default constructor called" << std::endl;
			this->_array = new T[this->_size];
		}

		Array(unsigned int size): _size(size)
		{
			std::cout << "Constructor for size: " << size << " called" << std::endl;
			this->_array = new T[this->_size];
		}
		
		Array(const Array &src)
		{
			std::cout << "Copy Constructor called" << std::endl;
			this->_array = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
				this->_array[i] = src._array[i];
		}

		~Array()
		{
			if (this->_array != NULL)
				delete[] this->_array;
		}


		Array &operator=(const Array &src)
		{
			if (this->_array !=NULL)
				delete [] this->_array;
			if(src.size() != 0)
			{
				this->_size = src.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->size(); i++)
					this->_array[i] = src._array[i];
			}
			return *this;
		}

		T &operator[](unsigned int index)
		{
			if (index >= this->_size || this->_array == NULL)
				throw std::exception();
			return (this->_array[index]);
		}

		unsigned int size() const
		{
			std::cout << "The Size of this Array is " << this->_size << std::endl;
			return (this->_size);
		}
};

#endif


				





















