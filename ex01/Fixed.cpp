/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:18:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 14:39:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : entier(0)
{
	std::cout << JAUNE << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << ROSE << "Copy constructor called" << RESET << std::endl;
    *this = copy;
}

Fixed::Fixed(const int new_int): entier(new_int << nb_bits)
{
	std::cout << BLUE << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float float_nb) : entier(roundf(float_nb * (float)(1 << nb_bits)))
{
	std::cout << CYAN << "Float constructor called" << RESET << std::endl;
}

Fixed::~Fixed()
{
	std::cout << RED << "Deconstructor called" << RESET << std::endl;
}



Fixed   &Fixed::operator=(Fixed const &cpy)
{
    if (this != &cpy)
    {
		std::cout << MAGENTA << "Copy assignment operator called" << RESET << std::endl;
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
    return (this->entier);
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