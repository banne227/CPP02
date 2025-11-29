#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

    private:
        int                 _value;
        static const int    _frac = 8;

    public:
        Fixed();
        Fixed(const Fixed &copy);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed(const int value);
        Fixed(const float value);
        float toFloat( void ) const;
        int toInt( void ) const;

        //operateur
        Fixed &operator=(const Fixed &copy);
        bool operator>(const Fixed &fixed_nbr) const;
        bool operator<(const Fixed &fixed_nbr) const;
        bool operator>=(const Fixed &fixed_nbr) const;
        bool operator<=(const Fixed &fixed_nbr) const;
        bool operator==(const Fixed &fixed_nbr) const;
        bool operator!=(const Fixed &fixed_nbr) const;
        Fixed operator+(const Fixed &fixed_nbr) const;
        Fixed operator-(const Fixed &fixed_nbr) const;
        Fixed operator*(const Fixed &fixed_nbr) const;
        Fixed operator/(const Fixed &fixed_nbr) const;
};

std::ostream  &operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif