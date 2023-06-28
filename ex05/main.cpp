/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:28:58 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/28 14:42:31 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    instance;
    instance.complain("DEBUG");
    instance.complain("INFO");
    instance.complain("WARNING");
    instance.complain("ERROR");
    return 0;
}