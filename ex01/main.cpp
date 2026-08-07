/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:56:37 by marvin            #+#    #+#             */
/*   Updated: 2026/08/06 16:56:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    Zombie  *horde;

    horde = zombieHorde(5, "petit bot de l'armee");
    if (!horde)
        return (1);
    for (int i = 0; i < 5; i++)
    {
        horde[i].announce();
        std::cout << i + 1 << std::endl;
    }
    delete[] horde;
    return (0);
}