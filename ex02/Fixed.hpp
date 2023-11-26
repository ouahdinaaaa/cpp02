/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:14:06 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/26 18:52:10 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cmath>

class Fixed
{
  
  private :
  
  int               entier;
  static const int nb_bits = 8;


  public :
  
    Fixed();
    Fixed(const int new_int);   
    ~Fixed();
    
    Fixed(Fixed const &copy);
    Fixed(const float float_nb);
    Fixed &operator=(Fixed const &cpy);
    bool  operator<(const Fixed &nb) const;
    bool  operator>(const Fixed &nb) const;
    bool  operator>=(const Fixed &nb) const;
    bool  operator<=(const Fixed &nb) const;
    bool  operator==(const Fixed &nb) const;
    bool  operator!=(const Fixed &nb) const;
    Fixed operator+(const Fixed &nb) const;
    Fixed operator-(const Fixed &nb) const;
    Fixed operator*(const Fixed &nb) const;
    Fixed operator/(const Fixed &nb) const;
    Fixed operator++(int);
    Fixed operator--(int);

    Fixed &operator++(void);
    Fixed &operator--(void);

    
    int   getRawBits(void) const;
    void  setRawBits( int const raw );
    int   toInt(void) const;
    float toFloat(void) const;
    
};

    std::ostream& operator<<(std::ostream &os, Fixed const &objet);


#endif