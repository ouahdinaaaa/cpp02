/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:18:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/24 11:00:40 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() entier(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int new_int) entier(new_int << nb_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_nb) : entier(rounfd(float_nb * (1 << nb_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}



Fixed   &Fixed::operator=(Fixed const &cpy)
{
    if (this != &cpy)
    {
		std::cout << "Copy assignment operator called" << std::endl;
        this->entier = cpy.entier;
    }
    return (*this);
}

void    Fixed::setRawBits(int const raw)
{
    this->entier = raw;
}

int     Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->entier);
}

int Fixed::toInt(void) const{
    return(this->entier >> nb_bits);
}

float   Fixed::toFloat(void) const{
    return this->entier >> nb_bits;
}

std::ostream operator<<(std::ostream &os, Fixed:: const &objet)
{
    os << objet.toFloat();
    return (os);
}