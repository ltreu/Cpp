/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:39:33 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/13 14:39:36 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "convert.h"
#include "ScalarConversion.hpp"

int
main(int argc, char *argv[])
{
    double              value;
    int                 precision;
    ScalarConversion    scalar;

    for (int i = 1; i < argc; i += 1)
    {
        std::cout << "string : " << argv[i] << std::endl;
        precision = getPrecision(argv[i]);
        value = atof(argv[i]);
        checkChar(scalar, value);
        checkInt(scalar, value);
        checkDouble(scalar, value, precision);
        checkFloat(scalar, value, precision);
        std::cout << std::endl;
    }
    return (0);
}
