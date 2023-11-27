/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:02:06 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 15:00:30 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << MAGENTA << a << std::endl;
std::cout << ROSE << ++a << std::endl;
std::cout << ROSE << a << std::endl;
std::cout << GREEN << a++ << std::endl;
std::cout << GREEN << a << std::endl;
std::cout << ORANGE << b << std::endl;
std::cout << Fixed::max(a, b) << std::endl;
return 0;
}