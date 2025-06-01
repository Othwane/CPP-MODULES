/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unky0 <unky0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:10 by omajdoub          #+#    #+#             */
/*   Updated: 2025/06/01 17:39:58 by unky0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    
    ScavTrap& operator=(const ScavTrap& other);
    
    void attack(const std::string& target);
    void guardGate();
};

#endif