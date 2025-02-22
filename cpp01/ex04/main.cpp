/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:33:07 by morgane           #+#    #+#             */
/*   Updated: 2025/02/22 19:56:12 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string modify(std::string line, std::string s1, std::string s2) {
    
        size_t pos = 0;

        pos = line.find(s1, pos);
        while (pos != std::string::npos)
        {
            line = line.erase(pos, s1.length());
            line = line.insert(pos, s2);
            pos += s2.length();
            pos = line.find(s1, pos);
        }
        return (line);
}

int main(int ac, char **av) {
    
    
    if (ac != 4) {
        
        std::cerr << "Error: arguments number is not valid" << std::endl;
        return (0);
    }
    if (!av[1] || !av[2] || !av[3]) {
        std::cerr << "Error: arguments can not be empty" << std::endl;
    }
    
    const char *filename = av[1];
    std::string copy = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream originalFile;
    std::ofstream copyFile;
    std::string line;
    
    copy += ".replace";
    originalFile.open(filename);
    copyFile.open(copy.c_str());
    if (!originalFile || !copyFile) {
        std::cerr << "Error: can not open the file" << std::endl;
        return (0);
    }
    while (std::getline(originalFile, line)) {
        line = modify(line, s1, s2);
        copyFile << line << std::endl;
        std::cout << line << std::endl;
    }
    
    return (0);
}