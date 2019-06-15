/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:02:30 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 12:02:58 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
public:
    HumanB(std::string);
    ~HumanB(void);
    void        attack();
    void        setWeapon(Weapon&);

private:
    Weapon*     _weapon;
    std::string _name;
};

#endif
