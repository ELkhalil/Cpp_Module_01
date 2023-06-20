/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:33:20 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 13:10:26 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(const std::string& type)
    : _type(type) {}

Weapon::~Weapon(){}

const std::string& Weapon::getType() const { return (_type);}

void Weapon::set_Type(const std::string &new_type)
{
    _type = new_type;
}
