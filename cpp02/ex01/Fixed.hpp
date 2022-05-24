#include <iostream>
#include <cmath>

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
		float toFloat(void)const;
		int toInt(void)const;
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
