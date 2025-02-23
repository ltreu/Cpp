/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:14:31 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:14:34 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <cstdlib>

# include "ICharacter.hpp"

class AMateria
{
    public:
        AMateria(void);
        AMateria(const std::string &type);
        AMateria(const AMateria &src);
        virtual             ~AMateria(void);

        AMateria &operator= (const AMateria &rhs);

        virtual AMateria    *clone(void) const = 0;
        virtual void        use(ICharacter &target) = 0;

        unsigned int        getXP(void) const;
        const std::string   &getType(void) const;

    protected:
        unsigned int        xp_;
        std::string         _type;
};

#endif
