/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:19:48 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:19:55 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int
main(void)
{
    ZombieHorde z1 = ZombieHorde(20);
    ZombieHorde z2 = ZombieHorde();
    z1.announce();
    z2.announce();
    return (0);
}