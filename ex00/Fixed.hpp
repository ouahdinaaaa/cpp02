/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:14:06 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/23 20:00:29 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class Fixed
{
  
  private :
  
  static const int nb_bits = 8;
  int               entier;


  public :
  
    Fixed();   
    ~Fixed();
    
    Fixed(Fixed const &copy);
    Fixed   &operator=(Fixed const &cpy);
    int   getRawBits(void) const;
    void  setRawBits( int const raw );
};

#endif