/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:52:36 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/28 12:46:15 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <string>

class FileReplacer {
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
    
    void _replace(std::string& line);
public:
    FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
    bool replaceOccurrences();
};

#endif