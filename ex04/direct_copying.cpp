/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direct_copying.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:25:10 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 14:37:06 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileStrReplacer.hpp"

    /*
        if the strings are equal or if oldStr is empty 
        i need to automatically copy the file data and stop
        we don't need to change anything
    */

void    direct_copy(std::ifstream& input, std::ofstream& output)
{
    std::string buff;

    getline(input, buff, '\0');
    if (input.fail())
    {
        std::cerr << "Error: While Reading..." << std::endl;
        std::exit(1);
    }
    output << buff;
    std::cout << "Copying...  " << std::endl;
    std::cout << "File Copied Successfuly" << std::endl;
    output.close();
    input.close();
}