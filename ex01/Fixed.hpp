/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:14:06 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/27 14:43:44 by ayael-ou         ###   ########.fr       */
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
# define GREEN "\033[0;20;1;32m"
# define ROSE "\033[38;2;169;30;80m"
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
    Fixed(const int new_int);   
    ~Fixed();
    
    Fixed(Fixed const &copy);
    Fixed(const float float_nb);
    Fixed   &operator=(Fixed const &cpy);
    int   getRawBits(void) const;
    void  setRawBits( int const raw );
    int toInt(void) const;
    float toFloat(void) const;
};

    std::ostream& operator<<(std::ostream &os, Fixed const &objet);


#endif