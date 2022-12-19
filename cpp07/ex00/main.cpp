/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:24:04 by adel-cor          #+#    #+#             */
/*   Updated: 2022/12/19 14:59:52 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Awesome
{
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getN() const {return this->_n;}
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & awesome) {
	return o << awesome.getN();}


int	main()
{

	{
	float	a = 21.445f;
	float	b = 42.445f;

	std::cout << "The max of a: " << a << " and b: " << b << " is:" <<
	"\t" << max(a, b) << std::endl;

	std::cout << "The min of a: " << a << " and b: " << b << " is:" <<
	"\t" << min(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "before:\n\ta: " << a << "\n\tb: " << b << std::endl;
	swap(a, b);
	std::cout << "after:\n\ta: " << a << "\n\tb: " << b << std::endl;
	}

	std::cout << std::endl << "**TEST**TEST**TEST**42**42**TEST**TEST**TEST**" << std::endl << std::endl;

	{
	std::string	a = "Terminator";
	std::string b = "Gandalf";

	std::cout << "The max of a: " << a << " and b: " << b << " is:" <<
	"\t" << ::max(a, b) << std::endl;

	std::cout << "The min of a: " << a << " and b: " << b << " is:" <<
	"\t" << ::min(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "before:\n\ta: " << a << "\n\tb: " << b << std::endl;
	::swap(a, b);
	std::cout << "after:\n\ta: " << a << "\n\tb: " << b << std::endl;
	}
	std::cout << std::endl << "**TEST**TEST**TEST**TEST**TEST**TEST" << std::endl;

	{
	Awesome IronMan = Awesome(2);
	Awesome Hulk = Awesome(3);
	std::cout << "IronMan = " << IronMan << std::endl;
	std::cout << "Hulk = " << Hulk << std::endl;
	::swap(IronMan , Hulk);
	std::cout << "IronMan = " << IronMan << std::endl;
	std::cout << "Hulk = "	<< Hulk << std::endl;
	std::cout << "min( IronMan, Hulk ) = " << ::min( IronMan, Hulk ) << std::endl;
	std::cout << "max( IronMan, Hulk ) = " << ::max( IronMan, Hulk ) << std::endl;
	}


	


	return (0);
}
