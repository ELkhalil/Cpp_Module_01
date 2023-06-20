/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:33:11 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 13:08:45 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
    private:
       std::string _type;
    public:
        Weapon(const std::string& type);
        ~Weapon();
        const std::string& getType() const;
        void  set_Type(const std::string &type);
};

#endif