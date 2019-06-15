/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:53:08 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:05:43 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
    return ;
}

Pony::~Pony(void)
{
    return ;
}

void
Pony::setName(std::string str)
{
    this->_name = str;
    return ;
}

void
Pony::setMark(std::string str)
{
    this->_mark = str;
    return ;
}

void
Pony::setAge(std::string str)
{
    this->_age = str;
    return ;
}

void
Pony::setColor(std::string str)
{
    this->_color = str;
    return ;
}

std::string
Pony::getName(void)
{
    return (this->_name);
}

std::string
Pony::getMark(void)
{
    return (this->_mark);
}

std::string
Pony::getAge(void)
{
    return (this->_age);
}

std::string
Pony::getColor(void)
{
    return (this->_color);
}
