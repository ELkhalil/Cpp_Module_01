/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:15:47 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/13 18:19:45 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const& type) : type(type) {}

Weapon::~Weapon( void ) {}

std::string const& Weapon::getType( void ) const { return this->type;}

void    Weapon::setType(std::string const& new_type)
{
    this->type = new_type;
}