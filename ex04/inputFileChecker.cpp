/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputFileChecker.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:12:38 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/16 18:23:17 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void    inputFileChecker(std::ifstream& inputFile, std::string inputFileName)
{
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Failed to open " << inputFileName << std::endl;
        std::exit(1);
    }
    if (is_empty(inputFile))
    {
        std::cerr << "Error: Empty File" << std::endl;
        std::cerr << "Try With Another File" << std::endl;
        std::exit(1);
    }
}