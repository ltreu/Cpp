/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:00:16 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 12:02:25 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s): _name(s)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void
HumanB::setWeapon(Weapon& w)
{
    this->_weapon = &w;
    return ;
}

void
HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType();
    std::cout << std::endl;
    return ;
}