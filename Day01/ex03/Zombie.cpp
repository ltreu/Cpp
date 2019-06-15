/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:21:18 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:46:12 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n): _type(t), _name(n)
{
    return ;
}

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    return ;
}

void
Zombie::setType(std::string str)
{
    this->_type = str;
    return ;
}

void
Zombie::setName(std::string str)
{
    this->_name = str;
    return ;
}

std::string
Zombie::announce(void)
{
    std::string format;
    std::string message;

    format = "<" + this->_name + " (" + this->_type + ")> ";
    message = "Braiiiiiiinnnssss...";
    return (format + message);
}
