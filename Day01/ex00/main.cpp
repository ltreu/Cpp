/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:57:16 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:05:06 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

/*
** Allocates a pony on the heap.
*/

static void
ponyOnTheHeap(void)
{
    Pony    *fluttershy = new Pony();

    fluttershy->setName("Fluttershy");
    std::cout << "Name  : " << fluttershy->getName() << std::endl;
    fluttershy->setMark("Butterflies");
    std::cout << "Mark  : " << fluttershy->getMark() << std::endl;
    fluttershy->setAge("17");
    std::cout << "Age   : " << fluttershy->getAge() << std::endl;
    fluttershy->setColor("Yellow && Pink");
    std::cout << "Color : " << fluttershy->getColor() << std::endl;
}

/*
** Allocates a pony on the stack.
*/

static void
ponyOnTheStack(void)
{
    Pony    pinkiepie;

    pinkiepie.setName("Pinkie Pie");
    std::cout << "Name  : " << pinkiepie.getName() << std::endl;
    pinkiepie.setMark("Ballons");
    std::cout << "Mark  : " << pinkiepie.getMark() << std::endl;
    pinkiepie.setAge("16");
    std::cout << "Age   : " << pinkiepie.getAge() << std::endl;
    pinkiepie.setColor("Pink && Pink");
    std::cout << "Color : " << pinkiepie.getColor() << std::endl;
}

/*
** Get things rolling.
*/

int
main(void)
{
    std::cout << "~~ Pony on the Heap ~~" << std::endl;
    ponyOnTheHeap();
    std::cout << std::endl;
    std::cout << "~~ Pony on the Stack ~~" << std::endl;
    ponyOnTheStack();
    return (0);
}
