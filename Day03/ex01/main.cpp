/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:55:37 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/08 09:55:39 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int
main(void)
{
    // Start!
    std::cout << "BATTLE CRY"<< std::endl;
    ScavTrap    mr_popo("Mr. Popo");
    ScavTrap    goku("Goku");

    // Mr. Popo vs Goku
    std::cout << std::endl << "ROUND 1" << std::endl;
    mr_popo.meleeAttack(goku.getName());
    goku.takeDamage(mr_popo.getMeleeAttackDamage());

    // Goku vs Mr. Popo
    std::cout << std::endl << "ROUND 2" << std::endl;
    goku.rangedAttack(mr_popo.getName());
    mr_popo.takeDamage(goku.getRangedAttackDamage());

    // Random Attack
    std::cout << std::endl << "ROUND 3" << std::endl;
    mr_popo.challengeNewcomer(goku.getName());
	
    return (0);
}
