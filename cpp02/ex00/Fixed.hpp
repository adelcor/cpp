#include <iostream>

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &src);
		int getRawBits(void)const;
		void setRawBits(int const raw);
};
