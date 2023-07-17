/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileStrReplacer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:12:53 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 15:00:02 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTRREPLACER_HPP
#define FILESTRREPLACER_HPP

#include <iostream>
#include <fstream>

void    inputFileChecker(std::ifstream& inputFile, std::string inputFileName);
void    outputFileChecker(std::ofstream& outputF);
void    direct_copy(std::ifstream& input, std::ofstream& output);
void    replace_occurrence(std::string& buff, std::string const& oldStr, std::string const& newStr);
void    replaceAndCopy(std::ifstream& input, std::ofstream& output, std::string const& oldStr, std::string const& newStr);

#endif