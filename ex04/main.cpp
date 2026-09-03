/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 20:20:40 by marvin            #+#    #+#             */
/*   Updated: 2026/08/08 20:20:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Not good argument" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.length() == 0)
    {
        std::cerr << "Error nothing in s1" << std::endl;
        return (1);
    }
    std::ifstream file_read(filename.c_str());
    if (!file_read.is_open())
    {
        std::cerr << "Error in ifstream to open" << std::endl;
        return (1);
    }
    std::string line;
    std::string result = "";
    int first_line = 1;
    while (std::getline(file_read, line))
    {
        if (!first_line)
            result += '\n';
        std::size_t pos = 0;
        std::size_t prev = 0;
        first_line = 0;
        while ((pos = line.find(s1, prev)) != std::string::npos)
        {
            result.append(line, prev, pos - prev);
            result.append(s2);
            prev = pos + s1.length();
        }
        result.append(line, prev, std::string::npos);
    }
    std::string file_replace = filename + ".replace";
    std::ofstream file_write(file_replace.c_str());
    if (!file_write.is_open())
    {
        std::cerr << "Error in ofstream to open" << std::endl;
        file_read.close();
        return (1);
    }
    file_write << result;
    file_read.close();
    file_write.close();
    return (0);
}
