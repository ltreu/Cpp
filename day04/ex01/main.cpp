/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:07:51 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:09:58 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

int
main(void)
{
    Character *zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy *b = new RadScorpion();
    Enemy *c = new RadScorpion();
    Enemy *d = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;

    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(c);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;
    zaz->attack(d);
    std::cout << *zaz;

    return (0);
}
