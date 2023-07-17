/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:47:55 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/13 13:58:46 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
    Zombie( void );
    Zombie(std::string const& name);
    ~Zombie( void );
    void announce( void );
private:  
    std::string _name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif