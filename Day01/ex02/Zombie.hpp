/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:10:50 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:12:50 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
    Zombie(std::string, std::string);
    ~Zombie(void);
    std::string announce(void);

private:
    std::string _type;
    std::string _name;
};

#endif
