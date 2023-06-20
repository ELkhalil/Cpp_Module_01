/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:57:14 by aelkhali          #+#    #+#             */
/*   Updated: 2023/06/20 16:57:16 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceOccurrences(const std::string& filename, const std::string& s1, const std::string& s2) {
    // Open the original file
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    // Create the new file with the ".replace" extension
    std::string newFilename = filename + ".replace";
    std::ofstream outputFile(newFilename);
    if (!outputFile) {
        std::cerr << "Error creating file: " << newFilename << std::endl;
        return;
    }

    // Read and replace occurrences line by line
    std::string line;
    while (std::getline(inputFile, line)) {
        std::string modifiedLine;
        size_t startPos = 0;
        size_t foundPos = line.find(s1);

        while (foundPos != std::string::npos) {
            modifiedLine += line.substr(startPos, foundPos - startPos) + s2;
            startPos = foundPos + s1.length();
            foundPos = line.find(s1, startPos);
        }

        modifiedLine += line.substr(startPos);  // Append the remaining characters
        outputFile << modifiedLine << std::endl;  // Write the modified line to the new file
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << "Replacement completed. Modified content saved in " << newFilename << std::endl;
}

int main() {
    std::string filename;
    std::string s1;
    std::string s2;

    // Get the filename, s1, and s2 from the user
    std::cout << "Enter the filename: ";
    std::getline(std::cin, filename);

    std::cout << "Enter the string to replace: ";
    std::getline(std::cin, s1);

    std::cout << "Enter the replacement string: ";
    std::getline(std::cin, s2);

    // Perform the replacements
    replaceOccurrences(filename, s1, s2);

    return 0;
}
