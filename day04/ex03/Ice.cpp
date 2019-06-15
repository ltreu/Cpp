/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:15:28 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:15:31 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    return ;
}

Ice::Ice(const Ice &src)
{
    *this = src;
    return ;
}

Ice::~Ice(void)
{
    return ;
}

Ice
&Ice::operator= (const Ice &rhs)
{
    if (this != &rhs)
    {
        this->xp_ = rhs.xp_;
    }
    return (*this);
}

AMateria
*Ice::clone(void) const
{
    return (new Ice());
}

void
Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" \
              << std::endl;
    return ;
}
