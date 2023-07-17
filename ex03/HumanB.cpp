/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:16:38 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/16 19:34:54 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const& name) : name(name), weapon(NULL) {}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack( void )
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() <<std::endl;
    else
        std::cout << this->name << " attacks with his hands" << std::endl;
}