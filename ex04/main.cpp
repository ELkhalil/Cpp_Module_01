/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:25:39 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 14:59:49 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileStrReplacer.hpp"


int main( int ac, char *av[] )
{
    if (ac != 4)
    {
        std::cerr << "Invalid Arguments" << std::endl;
        std::cerr << "Try : <fileName> <str_toReplace> <str_newStr>" << std::endl;
        return 1;
    }
    std::string inputFileName = std::string(av[1]);
    std::string oldStr = std::string(av[2]);
    std::string newStr = std::string(av[3]);
    std::string outputFileName = std::string(av[1]) + ".replace";
    std::ifstream   inputF(inputFileName);
    inputFileChecker(inputF, inputFileName);
    std::ofstream   outputF(outputFileName, std::ofstream::out | std::ofstream::trunc);
    outputFileChecker(outputF);
    if (oldStr.empty() || oldStr == newStr)
        return (direct_copy(inputF, outputF), 0);
    replaceAndCopy(inputF, outputF, oldStr, newStr);
    inputF.close();
    outputF.close();
    return 0;
}