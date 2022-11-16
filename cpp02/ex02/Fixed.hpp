/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:21:47 by adel-cor          #+#    #+#             */
/*   Updated: 2022/11/10 18:21:49 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int input);
		Fixed(const float input);

		~Fixed();

		Fixed &operator=(const Fixed &src);

		bool operator>(Fixed fixed)const;
		bool operator<(Fixed fixed)const;
		bool operator>=(Fixed fixed)const;
		bool operator<=(Fixed fixed)const;
		bool operator==(Fixed fixed)const;
		bool operator!=(Fixed fixed)const;

		float operator+(Fixed fixed)const;
		float operator-(Fixed fixed)const;
		float operator*(Fixed fixed)const;
		float operator/(Fixed fixed)const;

		Fixed operator++();
		Fixed operator--();

		Fixed operator++(int);
		Fixed operator--(int);

		float toFloat(void)const;
		int toInt(void)const;
		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, Fixed const &second);
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
