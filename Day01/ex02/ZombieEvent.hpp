/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:12:02 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:12:13 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void        setZombieType(std::string);
    std::string getZombieType(void);
    Zombie      *newZombie(std::string);
    Zombie      *randomChump(void);

private:
    std::string  _type;
};

#endif