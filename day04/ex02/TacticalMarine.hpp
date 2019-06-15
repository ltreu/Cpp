/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:12:44 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:13:24 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine(void);
        TacticalMarine(const TacticalMarine &src);

        ~TacticalMarine(void);

        TacticalMarine    &operator= (const TacticalMarine &rhs);

        virtual void          battleCry(void) const;
        virtual void          meleeAttack(void) const;
        virtual void          rangedAttack(void) const;
        virtual ISpaceMarine  *clone(void) const;
};

#endif
