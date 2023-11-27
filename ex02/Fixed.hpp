/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:14:06 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 14:59:59 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cmath>

# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define BLEU_E "\033[34m"
# define ROSE_C "\033[38;225m"
# define YELLOW "\033[33m"
# define BLANC "\033[107m"
# define MARRON "\033[38;10;94m"
# define SAPIN "\033[38;2;0;96;50m"
# define JAUNE "\033[38;5;208m"
# define RED "\033[31m"
# define EMERAUDE "\033[38;2;0;196;140m"
# define GRIS "\033[255;113;30m"
# define GREEN "\033[32m"
# define ROSE "\033[36m"
# define CIEL "\033[36m"
# define VERT "\033[38m"
# define ORANGE "\033[38;5;166m"
# define BLUE "\033[34m"
# define RESET "\033[1;97m"
# define VIOLET "\033[75;762;9m"


class Fixed
{
  
  private :
  
  int               entier;
  static const int nb_bits = 8;


  public :
  
    Fixed();
    ~Fixed();
    Fixed(const int new_int);   
    Fixed(Fixed const &copy);
    Fixed(const float float_nb);
    
    
    static  Fixed       &min(Fixed &a, Fixed &b);
    static  Fixed       &max(Fixed &a, Fixed &b);
    static  Fixed const &min(Fixed const &a, Fixed const &b);
    static  Fixed const &max(Fixed const &a, Fixed const &b);

    bool    operator<(const Fixed &nb) const;
    bool    operator>(const Fixed &nb) const;
    bool    operator>=(const Fixed &nb) const;
    bool    operator<=(const Fixed &nb) const;
    bool    operator==(const Fixed &nb) const;
    bool    operator!=(const Fixed &nb) const;
    
    Fixed   operator+(const Fixed &nb) const;
    Fixed   operator-(const Fixed &nb) const;
    Fixed   operator*(const Fixed &nb) const;
    Fixed   operator/(const Fixed &nb) const;
    
    Fixed   operator++(int);
    Fixed   operator--(int);
    Fixed   &operator++(void);
    Fixed   &operator--(void);

    
    int     toInt(void) const;
    float   toFloat(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    Fixed   &operator=(Fixed const &cpy);
    
};

    std::ostream& operator<<(std::ostream &os, Fixed const &objet);


#endif