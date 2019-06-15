/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:15:19 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:15:22 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &src);

        ~Cure(void);

        Cure            &operator= (const Cure &rhs);

        AMateria        *clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif
