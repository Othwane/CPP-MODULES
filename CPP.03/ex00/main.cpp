/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unky0 <unky0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:10 by omajdoub          #+#    #+#             */
/*   Updated: 2025/06/01 17:37:08 by unky0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap1("CL4P-TP");
    ClapTrap clap2(clap1);
    
    clap1.attack("Bandit");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    clap1.takeDamage(10);
    clap1.attack("Bandit");
    
    return 0;
}