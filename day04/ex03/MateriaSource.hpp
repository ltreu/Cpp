/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:16:40 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:16:44 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        ~MateriaSource(void);

        MateriaSource       &operator= (const MateriaSource &rhs);

        virtual void        learnMateria(AMateria *m);
        virtual AMateria    *createMateria(const std::string &type);

    private:
        AMateria            *_inventory[4];
        int                 _n_index;
};

#endif
