/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:21 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/16 19:41:02 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main( void )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    Harl harl;

    for (int i = 3; i > -1; i--)
        harl.complain(levels[i]);
    harl.complain("ing");
    harl.complain("");
    return 0;
}
