/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:33:47 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 13:17:55 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, const Weapon& weapon)
    : _name(name), weapon(weapon) {}

HumanA::~HumanA( void ){}

void    HumanA::attack( void ) const
{
    std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}