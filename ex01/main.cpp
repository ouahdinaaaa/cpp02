/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:01:37 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 14:41:52 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << GREEN << "a is " << a << std::endl;
std::cout << GREEN << "b is " << b << std::endl;
std::cout << GREEN << "c is " << c << std::endl;
std::cout << GREEN << "d is " << d << std::endl;
std::cout << GREEN << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << GREEN << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << GREEN << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << GREEN << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}