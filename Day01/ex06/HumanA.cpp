/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:17:41 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 11:32:48 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Human::HumanA(std::string s, Weapon& w): _name(s),  _weapon(w)
{
    return ;
}
HumanA::~HumanA(void)
{
    return;
}

void
HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType();
    std::cout << std::endl;
    return ;
}