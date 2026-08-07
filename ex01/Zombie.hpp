/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:45:20 by marvin            #+#    #+#             */
/*   Updated: 2026/08/06 15:45:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie();
        void    announce(void)
        {
            std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
        }
        void    put_name(std::string name)
        {
            this->name = name;
        }
};

Zombie  *zombieHorde(int N, std::string name);

#endif