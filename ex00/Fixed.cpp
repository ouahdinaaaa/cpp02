/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:18:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 14:35:47 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << JAUNE << "Default constructor called" << RESET << std::endl;
    setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << ROSE << "Copy constructor called" << RESET << std::endl;
    *this = copy;
}

Fixed   &Fixed::operator=(Fixed const &cpy)
{
    if (this != &cpy)
    {
        std::cout << MAGENTA << "Copy assignment operator called" << RESET << std::endl;
        this->entier = cpy.getRawBits();
    }
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << BLUE << "getRawBits member function called" << RESET << std::endl;
    return (this->entier);
}

void    Fixed::setRawBits(int const raw)
{
    this->entier = raw;
}