/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:22:03 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/05 06:42:26 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
    Zombie(void);
    Zombie(std::string, std::string);
    ~Zombie(void);
    void    setName(std::string);
    void    setType(std::string);
    std::string announce(void);

private:
    std::string _type;
    std::string _name;
};

#endif