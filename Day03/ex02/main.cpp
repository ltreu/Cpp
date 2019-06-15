/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:54:00 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/08 09:54:03 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int
main(void)
{
    // Start!
    std::cout << "BATTLE CRY"<< std::endl;
    ClapTrap    mr_popo("Mr. Popo");
    ClapTrap    goku("Goku");

    // Mr. Popo vs Goku
    std::cout << std::endl << "ROUND 1" << std::endl;
    mr_popo.meleeAttack(goku.getName());
    goku.takeDamage(mr_popo.getMeleeAttackDamage());

    // Goku vs Mr. Popo
    std::cout << std::endl << "ROUND 2" << std::endl;
    goku.rangedAttack(mr_popo.getName());
    mr_popo.takeDamage(goku.getRangedAttackDamage());

    return (0);
}
