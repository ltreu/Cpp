/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:04:08 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 12:04:11 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
    Weapon(std::string);
    ~Weapon(void);
    void                setType(std::string);
    const std::string&  getType(void);

private:
    std::string         _type;
};

#endif
