/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:08:09 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:10:06 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle(void);
        PlasmaRifle(const PlasmaRifle &src);
        ~PlasmaRifle(void);

        PlasmaRifle   &operator= (const PlasmaRifle &rhs);

        virtual void  attack(void) const;
};

#endif
