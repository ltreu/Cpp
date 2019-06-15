/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <ltreu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:53:48 by ltreu             #+#    #+#             */
/*   Updated: 2019/06/08 09:53:50 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    // Constructors and destructors
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string);
    // Operators
    FragTrap  &operator=(FragTrap const &rhs);
	// Attack methods
    void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    // Random attack methods
    void          vaulthunter_dot_exe(std::string const &target);
    void          memeAttack(std::string const &target);
    void          fartAttack(std::string const &target);
    void          weedAttack(std::string const &target);
    void          troloAttack(std::string const &target);
    void          laserAttack(std::string const &target);
    // Get methods
    unsigned int  getVaulHunter_dot_exeDamage(void);
    unsigned int  getMemeAttackDamage(void);
    unsigned int  getFartAttackDamage(void);
    unsigned int  getWeedAttackDamage(void);
    unsigned int  getTroloAttackDamage(void);
    unsigned int  getLaserAttackDamage(void);

private:
    // Damage points
    unsigned int  _vaulhunterDamagePoints;
    unsigned int  _memeAttackDamagePoints;
    unsigned int  _fartAttackDamagePoints;
    unsigned int  _weedAttackDamagePoints;
    unsigned int  _troloAttackDamagePoints;
    unsigned int  _laserAttackDamagePoints;
};

#endif
