/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:14:51 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 15:14:55 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(const std::string &name);
        Character(const Character &src);

        ~Character(void);

        Character                   &operator= (const Character &rhs);

        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);
        virtual const std::string   &getName() const;

    private:
        std::string                 _name;
        AMateria*                   _inventory[4];
        int                         _n_index;
};

#endif
