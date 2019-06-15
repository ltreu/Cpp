/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:33:09 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 12:00:02 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
public:
    HumanA(std::string, Weapon&);
     ~HumanA(void);
    void        attack(void);

private:
    std::string _name;
    Weapon&     _weapon;
};

#endif 