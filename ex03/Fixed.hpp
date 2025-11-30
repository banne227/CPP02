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
        Fixed &operator++(void);          //prefixe
        Fixed &operator--(void);          //prefixe
        Fixed operator++(int);            //postfixe
        Fixed operator--(int);            //postfixe

        //min et max
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream  &operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif