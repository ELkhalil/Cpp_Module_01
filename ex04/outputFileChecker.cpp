/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outputFileChecker.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:45:13 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 14:35:44 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileStrReplacer.hpp"

void    outputFileChecker(std::ofstream& outputF)
{
    if (outputF.fail())
    {
        std::cerr << "Error: Creating The Output File..." << std::endl;
        std::exit(1);
    }
}