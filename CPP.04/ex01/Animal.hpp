/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unky0 <unky0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:10 by omajdoub          #+#    #+#             */
/*   Updated: 2025/06/01 23:42:33 by unky0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const;
};

#endif
