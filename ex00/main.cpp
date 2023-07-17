/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:47:25 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/16 19:24:43 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main( void )
{
    Zombie  *zombie;
    
    std::cout << "***Welcome to the Zombies World***" << std::endl;
    std::cout << std::endl;
    std::cout << "****** STACK ALLOCATION ******" << std::endl;
    randomChump("Drizzler");
    std::cout << "Drizzler Died without any action..." << std::endl;
    std::cout << std::endl;
    std::cout << "****** HEAP ALLOCATION ******" << std::endl;
    zombie = newZombie("Fleshy");
    zombie->announce();
    std::cout << "Killing Fleshy Manualy..." << std::endl;
    delete zombie;
    return 0;
}