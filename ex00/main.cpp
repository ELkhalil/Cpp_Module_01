/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:09:23 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 12:01:19 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
  std::cout << "Creating a Zombie on the Stack World" << std::endl;
  randomChump("StackZombie");
  std::cout << "Creating a Zombie on the Heap World" << std::endl;
  Zombie *heapZombie = newZombie("Heap_Zombie");
  heapZombie->announce();
  delete heapZombie;
  return 0;
}
