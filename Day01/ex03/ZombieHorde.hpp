/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:29:13 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:29:28 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
public:
    ZombieHorde(int);
    ZombieHorde(void);
    ~ZombieHorde(void);
    void        announce(void);
    std::string randomChump(void);

private:
    Zombie      *_zombie;
    int         _number;
};

#endif
