/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:30:04 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/14 11:47:43 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <cmath>
# include <iostream>

class Fixed
{
public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed(void);
    Fixed               &operator=(const Fixed &rhs);
    Fixed               &operator++(void);
    Fixed               &operator--(void);
    Fixed               operator++(int);
    Fixed               operator--(int);
    bool                operator>(const Fixed &rhs) const;
    bool                operator<(const Fixed &rhs) const;
    bool                operator>=(const Fixed &rhs) const;
    bool                operator<=(const Fixed &rhs) const;
    bool                operator==(const Fixed &rhs) const;
    bool                operator!=(const Fixed &rhs) const;
    Fixed               operator+(const Fixed &rhs) const;
    Fixed               operator-(const Fixed &rhs) const;
    Fixed               operator*(const Fixed &rhs) const;
    Fixed               operator/(const Fixed &rhs) const;
    int                 getRawBits(void) const;
    void                setRawBits(int const);
    int                 toInt(void) const;
    float               toFloat(void) const;
    static Fixed        &min(Fixed &a, Fixed &b);
    const static Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    const static Fixed  &max(const Fixed &a, const Fixed &b);

private:
    int                 _fixedPointValue;
    static const int    _fracBits;
};

std::ostream            &operator<<(std::ostream &out, Fixed const &val);

#endif
