/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:07:41 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:09:53 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
    public:
        Enemy(void);
        Enemy(const Enemy &src);
        Enemy(int hp, const std::string &type);

        virtual           ~Enemy(void);

        Enemy             &operator= (const Enemy &rhs);

        int               getHP(void) const;
        const std::string getType(void) const;

        virtual void      takeDamage(int damage);

    protected:
        int               _hp;
        std::string       _type;
};

#endif
