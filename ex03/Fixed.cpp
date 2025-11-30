#include "Fixed.hpp"

static float power(float base, int exposant) //ici j'utiliserai la base 2
{
    float result;

    if (exposant == 0)
        return (1);
    if (exposant < 0)
    {
        base = 1 / base;
        exposant *= -1;
    }

    result = base;
    for (int i = 1; i < exposant; i++)
        result *= base;
    return (result);
}

Fixed::Fixed() : _value(0) {
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
    //std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int value){
    this->_value = (value * power(2,this->_frac)); //conversion en fixed-int *=2**8 (256)
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value){
    float to_imprement = (value * power(2,this->_frac));
    this->_value = roundf(to_imprement);
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    return (this->_value);
}

void Fixed::setRawBits( int const raw ){
    this->_value = raw;
}

// conversion fixed -> nbr | *= 254(2**8)
float Fixed::toFloat( void ) const{
    return(this->_value / 256.0f);  
}

int Fixed::toInt( void ) const{
    return(this->_value / 256);  
}

Fixed &Fixed::operator=(const Fixed &copy) {
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy) {
        this->_value = copy.getRawBits();
    }
    return (*this);
}

std::ostream  &operator<<(std::ostream &str, Fixed const &fixed_nbr){
    return (str << fixed_nbr.toFloat());
}

bool Fixed::operator>(const Fixed &fixed_nbr) const{
    return (this->getRawBits() > fixed_nbr.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed_nbr) const{
    return (this->getRawBits() < fixed_nbr.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed_nbr) const{
    return (this->getRawBits() >= fixed_nbr.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed_nbr) const{
    return (this->getRawBits() <= fixed_nbr.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed_nbr) const{
    return (this->getRawBits() == fixed_nbr.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed_nbr) const{
    return (this->getRawBits() != fixed_nbr.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed_nbr) const{
    Fixed result;
    int res = this->getRawBits() + fixed_nbr.getRawBits();
    result.setRawBits(res);
    return(result);
}

Fixed Fixed::operator-(const Fixed &fixed_nbr) const{
    Fixed result;
    int res = this->getRawBits() - fixed_nbr.getRawBits();
    result.setRawBits(res);
    return(result);
}

Fixed Fixed::operator*(const Fixed &fixed_nbr) const{
    Fixed result;
    long res = (long)this->getRawBits() * (long)fixed_nbr.getRawBits();
    res /= 256; //division par 256
    result.setRawBits((int)res);
    return(result);
}

Fixed Fixed::operator/(const Fixed &fixed_nbr) const{
    Fixed result;
    long res = (long)this->getRawBits() / (long)fixed_nbr.getRawBits(); 
    res *= 256;  //multiplication par 256
    result.setRawBits((int)res);
    return(result);
}

Fixed &Fixed::operator++(void){ //prefixe
    this->_value += 1;
    return (*this);
}

Fixed &Fixed::operator--(void){ //prefixe
    this->_value -= 1;
    return (*this);
}

Fixed Fixed::operator++(int){ //postfixe
    Fixed temp = *this;
    this->_value += 1;
    return (temp);
}

Fixed Fixed::operator--(int){ //postfixe
    Fixed temp = *this;
    this->_value -= 1;
    return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
