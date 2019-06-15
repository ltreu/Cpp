/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:09:55 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:10:36 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n): _type(t), _name(n)
{
    return ;
}
Zombie::~Zombie(void)
{
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