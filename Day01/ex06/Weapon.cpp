/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:03:23 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 12:03:38 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): _type(t)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void
Weapon::setType(std::string str)
{
    this->_type = str;
    return ;
}

const std::string&
Weapon::getType(void)
{
    return (this->_type);
}