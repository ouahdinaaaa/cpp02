/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:18:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/23 20:06:42 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Fixed has been created" << std::endl;
    setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "Fixed has been destroyed" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

Fixed   &Fixed::operator=(Fixed const &cpy)
{
    if (this != &cpy)
    {
        this->entier = cpy.entier;
    }
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->entier);
}

void    Fixed::setRawBits(int const raw)
{
    this->entier = raw;
}