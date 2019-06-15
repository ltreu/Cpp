/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 07:06:37 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/08 07:27:02 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
    // Constructors and destructors
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	// Operators
	NinjaTrap  &operator=(NinjaTrap const &rhs);
	// Damage methods
	void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
	// Shoebox
	void 		ninjaShoebox(NinjaTrap &attack);
	void 		ninjaShoebox(ClapTrap &attack);
	void 		ninjaShoebox(FragTrap &attack);
	void 		ninjaShoebox(ScavTrap &attack);
};

#endif
