/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:46:47 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 12:14:27 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        Zombie(const std::string &name);
        ~Zombie( void );
        void    announce( void );
        void    set_name(const std::string &name);
};

Zombie* newZombie(const std::string& name);
void    randomChump(const std::string& name);
Zombie* zombieHorde( int N, std::string name);
#endif