/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:27:16 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/14 03:05:39 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int	_fracBits = 8;

Fixed::Fixed(void)
{
    this->_fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed
&Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->_fixedPointValue = rhs.getRawBits();
    }
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

int
Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void
Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
    std::cout << "setRawBits member function called" << std::endl;
    return ;
}
