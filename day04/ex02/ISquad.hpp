/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:12:08 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:13:06 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad(void) { return ; }

        virtual int           push(ISpaceMarine *marine) = 0;
        virtual int           getCount(void) const = 0;
        virtual ISpaceMarine  *getUnit(int n) const = 0;

};

#endif
