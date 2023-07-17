/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:16:22 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/13 19:21:16 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA ( void )  {}

void HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() <<std::endl;
}