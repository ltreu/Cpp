/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:14:18 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:14:23 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(const std::string &type)
{
    this->xp_ = 0;
    this->_type = type;
    return ;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria
&AMateria::operator= (const AMateria &rhs)
{
    if (this != &rhs)
    {
        this->xp_ = rhs.xp_;
        this->_type = rhs._type;
    }
    return (*this);
}

const std::string
&AMateria::getType(void) const
{
    return (this->_type);
}

unsigned int  AMateria::getXP(void) const
{
    return (this->xp_);
}
