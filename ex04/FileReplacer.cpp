/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:52:27 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/28 12:41:57 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FileReplacer.hpp"
#include <fstream>
#include <string>

void FileReplacer::_replace(std::string& line) {
    std::size_t pos = 0;
    while ((pos = line.find(_s1, pos)) != std::string::npos) {
        line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
        pos += _s2.length();
    }
}
FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

bool FileReplacer::replaceOccurrences() {
    std::ifstream inputFile(_filename);
    if (!inputFile) {
        std::cerr << "Failed to open input file." << std::endl;
        return false;
    }

    std::ofstream outputFile(_filename + ".replace");
    if (!outputFile) {
        std::cerr << "Failed to create output file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        _replace(line);
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();

    std::cout << "Replacement completed. Output file: " << _filename << ".replace" << std::endl;
    return true;
}
