/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unky0 <unky0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:10 by omajdoub          #+#    #+#             */
/*   Updated: 2025/06/01 17:58:49 by unky0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    // ClapTrap clap1("CL4P-TP");
    // clap1.attack("Bandit");
    // clap1.takeDamage(5);
    // clap1.beRepaired(3);
    
    // ScavTrap scav1("SC4V-TP");
    // scav1.attack("Raider");
    // scav1.takeDamage(30);
    // scav1.beRepaired(10);
    // scav1.guardGate();


    FragTrap frag1("FR4G-TP");
    frag1.attack("Psycho");
    frag1.takeDamage(40);
    frag1.beRepaired(15);
    frag1.highFivesGuys();
    
    return 0;
}