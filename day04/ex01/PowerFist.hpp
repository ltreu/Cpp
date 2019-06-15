/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:08:29 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:10:15 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist(void);
        PowerFist(const PowerFist &src);

        ~PowerFist(void);

        PowerFist     &operator= (const PowerFist &rhs);

        virtual void  attack(void) const;
};

#endif
