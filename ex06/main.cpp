/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:02:20 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 17:18:22 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: Nothing to complain about !!" << std::endl;
        return 1;
    }
    std::string param = std::string(av[1]);
    Harl    harl;

    harl.complain(param);
    return 0;
}