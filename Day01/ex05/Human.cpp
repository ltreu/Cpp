/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:53:37 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:53:40 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
    return ;
}
Human::~Human(void)
{
    return ;
}

Brain
Human::getBrain(void)
{
    return (this->_brain);
}

std::string
Human::identify(void)
{
    return (this->_brain.identify());
}
