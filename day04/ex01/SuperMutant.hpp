/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:09:20 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:10:42 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        SuperMutant(const SuperMutant &src);

        ~SuperMutant(void);

        SuperMutant   &operator= (const SuperMutant &rhs);

        virtual void  takeDamage(int damage);
};

#endif
