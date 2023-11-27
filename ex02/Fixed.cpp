/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:18:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 15:04:41 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"


//FUNCTION  CONSTRUCTOR / DESTRUCTOR

Fixed::Fixed() : entier(0)
{
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

Fixed::Fixed(const int new_int): entier(new_int << nb_bits)
{
}

Fixed::Fixed(const float float_nb) : entier(roundf(float_nb * (float)(1 << nb_bits)))
{
}

Fixed::~Fixed()
{
}


//---------------------------------FUNCTION TO CPY/GET/SET/FLOAT/INT-----------------------------

Fixed   &Fixed::operator=(Fixed const &cpy){
    if (this != &cpy)
        this->entier = cpy.entier;
    return (*this);
}

void    Fixed::setRawBits(int const raw){
    this->entier = raw;
}

int     Fixed::getRawBits(void) const{
    return this->entier;
}

int Fixed::toInt(void) const{
    return (this->entier >> nb_bits);
}

float   Fixed::toFloat(void) const{
    return this->entier / (float)(1 << nb_bits);
}

std::ostream& operator<<(std::ostream &os, Fixed const &objet)
{
    os << objet.toFloat();
    return (os);
}

//-----------------------------------OPERATOR DE COMPARAISON-----------------------------------

bool    Fixed::operator<(const Fixed &nb) const{
    return (this->entier < nb.entier);
}

bool    Fixed::operator>(const Fixed &nb) const{
    return (this->entier > nb.entier);
}

bool    Fixed::operator>=(const Fixed &nb) const{
    return (this->entier >= nb.entier);
}

bool    Fixed::operator<=(const Fixed &nb) const{
    return (this->entier <= nb.entier);
}

bool Fixed::operator==(const Fixed &nb) const{
    return (this->entier == nb.entier);
}

bool Fixed::operator!=(const Fixed &nb) const{
    return (this->entier != nb.entier);
}

//--------------------------------------OPERATOR MATHEMATIQUES--------------------------------

Fixed Fixed::operator+(const Fixed &nb) const{
    return (this->entier + nb.entier);
}

Fixed   Fixed::operator-(const Fixed &nb) const{
    return (this->entier - nb.entier);
}

Fixed   Fixed::operator*(const Fixed &nb) const{
    return (this->toFloat() * nb.toFloat());
}

Fixed   Fixed::operator/(const Fixed &nb) const{
    return(this->toFloat() / nb.toFloat());
}

//------------------------------------OPERATOR INCREMENTATION--------------------------------

Fixed   &Fixed::operator++(void){
    this->entier++;
    return *this;
}

Fixed   &Fixed::operator--(void){
    this->entier--;
    return *this;
}

Fixed   Fixed::operator++(int){
    Fixed   tmp = *this;
    ++*this;
    return tmp;
}

Fixed   Fixed::operator--(int){
    Fixed   tmp = *this;
    --*this;
    return tmp;
}


//--------------------------------------FONCTION INT   MIN--------------------------------

Fixed const   &Fixed::min(Fixed const &a, Fixed const &b){
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed const   &Fixed::max(Fixed const &a, Fixed const &b){
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}


//--------------------------------------FONCTION MAX---------------------------------------

Fixed   &Fixed::min(Fixed &a, Fixed &b){
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b){
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
