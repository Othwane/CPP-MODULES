/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unky0 <unky0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:10 by omajdoub          #+#    #+#             */
/*   Updated: 2025/06/01 23:51:16 by unky0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructed\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copied\n";
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assigned\n";
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destroyed\n";
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound\n";
}
