/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:06:18 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:06:23 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
    public:
        // Constructors
        Victim(void);
        Victim(const Victim &src);
        Victim(std::string name);
        // Destructors
        ~Victim(void);
        // Operators
        Victim        &operator= (const Victim &rhs);
        // Set methods
        void          setName(std::string name);
        // Get methods
        std::string   getName(void) const;
        void          getPolymorphed(void) const;

    private:
        std::string   _name;
};

std::ostream          &operator<< (std::ostream &out, const Victim &rhs);

#endif
