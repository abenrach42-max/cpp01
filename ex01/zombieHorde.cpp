/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:49:37 by marvin            #+#    #+#             */
/*   Updated: 2026/08/07 14:49:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *horde;

    horde = new Zombie[N];
    if (!horde)
        return (NULL);
    for (int i = 0; i < N; i++)
        horde[i].put_name(name);
    return (horde);
}
