/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:04:19 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/10 13:05:58 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        // Constructors
        Peon(void);
        Peon(const Peon &src);
        Peon(std::string name);
        // Destructors
        ~Peon(void);
        // Operators
        Peon        &operator= (const Peon &rhs);
        // Get methods
        virtual void        getPolymorphed(void) const;

    private:
        std::string _name;
};

#endif
