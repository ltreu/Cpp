/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:06:47 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:09:33 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
    public:
        AWeapon(void);
        AWeapon(const AWeapon &src);
        AWeapon(const std::string &name, int apcost, int damage);

        virtual           ~AWeapon(void);

        AWeapon           &operator= (const AWeapon &rhs);

        virtual void      attack(void) const = 0;

        int               getAPCost(void) const;
        int               getDamage(void) const;
        const std::string getName(void) const;

    protected:
        int               _damage;
        int               _apcost;
        std::string       _name;
};

#endif
