/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:15:53 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/13 18:19:23 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
    Weapon(std::string const& type);
    ~Weapon( void );
    std::string const& getType( void ) const;
    void    setType( std::string const& new_type );
private:    
    std::string type;
};

#endif