/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:41 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/16 18:25:32 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {}
Harl::~Harl( void ) {}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void        (Harl::*funPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int         i = 0;

    while (level != levels[i] && i < 4)
        i++;
    if (i < 4)
        (this->*funPtr[i])();
}

void Harl::debug( void )
{
    std::cout << "DEBUG: ";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << std::endl;
}
void Harl::info( void )
{
    std::cout << "INFO: ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}
void Harl::warning( void )
{
    std::cout << "WARNING: ";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << std::endl;
}
void Harl::error( void )
{
    std::cout << "ERROR: ";
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}