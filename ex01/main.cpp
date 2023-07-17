/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:47:25 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/16 19:25:25 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int     num_zombies = 5;
    Zombie  *hord_zombies;

    std::cout << "***Welcome to the Small Zombies World***" << std::endl;
    std::cout << "Creating " << num_zombies << " Small Zombies" << std::endl;
    hord_zombies = zombieHorde(num_zombies, "SmallZombie");
    if (!hord_zombies)
    {
        std::cout << "Failed to create Zombies..." << std::endl;
        return (1);
    }
    for(int i = 0; i < 5; i++)
        hord_zombies[i].announce();
    std::cout << "--> Killing the created Zombies..." << std::endl;
    delete [] hord_zombies;
    return 0;
}