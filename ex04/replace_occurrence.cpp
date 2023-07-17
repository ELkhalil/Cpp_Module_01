/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_occurrence.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:20:10 by aelkhali          #+#    #+#             */
/*   Updated: 2023/07/15 13:40:49 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileStrReplacer.hpp"

void    replace_occurrence(std::string& buff, std::string const& oldStr, std::string const& newStr)
{
    std::string finalStr;
    std::size_t lastPos = 0;
    std::size_t findPos = 0;

    while((findPos = buff.find(oldStr, lastPos)) != std::string::npos)
    {
        finalStr.append(buff, lastPos, findPos - lastPos);
        finalStr += newStr;
        lastPos = findPos + oldStr.length();
    }
    finalStr.append(buff, lastPos, buff.length() - lastPos);
    buff.swap(finalStr);
}