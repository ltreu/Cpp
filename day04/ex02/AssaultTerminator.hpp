/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:11:54 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:12:57 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator(void);
        AssaultTerminator(const AssaultTerminator &src);

        ~AssaultTerminator(void);

        AssaultTerminator   &operator= (const AssaultTerminator &rhs);

        virtual void          battleCry(void) const;
        virtual void          meleeAttack(void) const;
        virtual void          rangedAttack(void) const;
        virtual ISpaceMarine  *clone(void) const;
};

#endif
