/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceAndCopy.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:56:24 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 14:59:04 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileStrReplacer.hpp"

void    replaceAndCopy(std::ifstream& input, std::ofstream& output, std::string const& oldStr, std::string const& newStr)
{
    std::string buff;

    while (!input.eof())
    {
        getline(input, buff);
        if (input.fail() && !input.eof())
        {
            std::cerr << "Error: While Reading..." << std::endl;
            std::exit(1);
        }
        replace_occurrence(buff, oldStr, newStr);
        output << buff;
        if (!input.eof())
            output << std::endl;
        buff.clear();
    }
}