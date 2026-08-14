/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:27:32 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 23:27:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harl;
    std::string line;

    while (1)
    {
        std::cout << "Enter a command (DEBUG, INFO, WARNING, ERROR : ";
        std::cin >> line;
        harl.complain(line);
    }
    return (0);
}