/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:16:21 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:16:24 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int
main(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *zaz = new Character("zaz");
    AMateria *tmp;

    tmp = src->createMateria("ice");
    zaz->equip(tmp);
    tmp = src->createMateria("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");

    zaz->use(0, *bob);
    zaz->use(1, *bob);

    delete bob;
    delete zaz;
    delete src;

    return (0);
}
