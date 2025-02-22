/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:33:07 by morgane           #+#    #+#             */
/*   Updated: 2025/02/22 19:02:01 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

bool line_ended(std::string line, size_t pos) {
    
    if (line[pos] == '\0')
        return true;
    else
        return false;
}

std::string replace(std::string line, std::string s1, std::string s2) {
    
        size_t pos = 0;

        pos = line.find(s1, pos);
        while (pos != std::string::npos)
        {
            line = line.erase(pos, s1.length());
            std::cout << "erase : " << line << std::endl;
            
            line = line.substr(0, pos) + s2 + line.substr(pos + s2.length());
            // std::cout << "substr 1 : " << line << std::endl;
            
            // std::cout << "line sans s2: " << line << std::endl;
            // line += s2;
            // std::cout << "+ s2 : " << line << std::endl;
            
            // std::cout << "substrTEST : " <<  << std::endl;
            // std::cout << "pos Test = " << pos << std::endl;
            // line += line.substr(pos + s2.length());
            // std::cout << "substr 2 : " << line << std::endl;
            
            pos += s2.length();
            
            pos = line.find(s1, pos);
        }
        std::cout << " LINE = " << line << std::endl << std::endl;
        return (line);
}

int main(int ac, char **av) {
    
    if (ac != 4) {
        
        std::cerr << "Error: arguments number is not valid" << std::endl;
        return (0);
    }
    const char *filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream originalFile;
    std::string line;

    originalFile.open(filename);
    if (!originalFile) {
        std::cerr << "Error: can not open the file" << std::endl;
        return (0);
    }
    while (std::getline(originalFile, line)) {
        line = replace(line, s1, s2);
        std::cout << line << std::endl;
    }

    // std::string lineTest = "maman";
    // std::cout << "line --> " << lineTest << std::endl;
    // lineTest = lineTest.substr(3);
    // std::cout << "line --> " << lineTest << std::endl;
    // std::cout << "OK" << std::endl;
    
    
    
    return (0);
}