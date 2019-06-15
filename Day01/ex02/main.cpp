/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:08:53 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:13:11 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int
main(void)
{
    Zombie      *zombie_1;
    Zombie      *zombie_2;
    ZombieEvent event;

    event.setZombieType("trolo");
    zombie_1 = event.randomChump();
    std::cout << zombie_1->announce() << std::endl;
    delete zombie_1;
    event.setZombieType("macho");
    zombie_2 = event.randomChump();
    std::cout << zombie_2->announce() << std::endl;
    delete zombie_2;
    return (0);
}