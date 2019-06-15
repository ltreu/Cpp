/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 07:15:34 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/08 07:15:51 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ScavTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	~SuperTrap();
	SuperTrap &operator= (const SuperTrap &rhs);
	void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
};

#endif
