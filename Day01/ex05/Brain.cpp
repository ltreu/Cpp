/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:51:46 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:52:15 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    setAddress();
    return ;
}

Brain::~Brain(void)
{
    return ;
}

void
Brain::setAddress(void)
{
    std::stringstream   buff;

    buff << this;
    this->_address = buff.str();
    return ;
}

std::string
Brain::getAddress(void)
{
    return (this->_address);
}

std::string
Brain::identify(void)
{
    return (this->getAddress());
}
