/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:47:55 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/13 14:00:12 by aelkhali         ###   ########.fr       */
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
    void set_name(std::string const& name);
private:  
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif