/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:08:47 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:10:33 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion(void);
        RadScorpion(const RadScorpion &src);

        ~RadScorpion(void);

        RadScorpion   &operator= (const RadScorpion &rhs);
};

#endif
