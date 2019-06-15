/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:23:10 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/14 03:22:24 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int
main(void)
{
    Fixed       a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " AS INTEGER" << std::endl;
    std::cout << "b is " << b.toInt() << " AS INTEGER" << std::endl;
    std::cout << "c is " << c.toInt() << " AS INTEGER" << std::endl;
    std::cout << "d is " << d.toInt() << " AS INTEGER" << std::endl;

    return (0);
}
