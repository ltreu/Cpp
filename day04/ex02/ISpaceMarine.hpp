/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:12:00 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:13:01 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
        virtual               ~ISpaceMarine(void) { return ; }

        virtual void          battleCry(void) const = 0;
        virtual void          meleeAttack(void) const = 0;
        virtual void          rangedAttack(void) const = 0;

        virtual ISpaceMarine  *clone(void) const = 0;
};

#endif
