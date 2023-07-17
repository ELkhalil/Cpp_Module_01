/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:14:43 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/13 18:09:20 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N > 0)
    {
        Zombie* hord_zombies = new Zombie[N];
        for (int i = 0; i < N; i++)
        {
            hord_zombies[i].set_name(name);
        }
        return (hord_zombies);
    }
    return (NULL);
}