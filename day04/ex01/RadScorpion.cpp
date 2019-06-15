/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:08:39 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:10:27 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : RadScorpion::Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &src)
{
    *this = src;
    return ;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion
&RadScorpion::operator= (const RadScorpion &rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}
