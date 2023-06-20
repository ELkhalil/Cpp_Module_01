/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:09:23 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 12:20:51 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
  std::cout << "Creating a Hord of Zombies on the Heap World" << std::endl;
  Zombie  *horde = zombieHorde(5, "HeapZombie");
  for (int i = 0; i < 5; i++) {
    horde[i].announce();
  }
  delete[] horde;
  return 0;
}
