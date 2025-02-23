/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:07:23 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:09:43 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <cstdlib>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    public:
        Character(void);
        Character(const Character &src);
        Character(const std::string &name);

        ~Character(void);

        Character           &operator= (const Character &rhs);

        void                recoverAP(void);
        void                equip(AWeapon *weapon);
        void                attack(Enemy *enemy);

        int                 getAP(void) const;
        AWeapon            *getWeapon(void) const;
        const std::string   getName(void) const;

    private:
        int                 _ap;
        AWeapon             *_weapon;
        std::string         _name;
};

std::ostream                &operator<< (std::ostream &o, const Character &rhs);

#endif
