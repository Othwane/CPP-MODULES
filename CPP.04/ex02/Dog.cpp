#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructed\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Dog copied\n";
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assigned\n";
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const {
    std::cout << "Woof!\n";
}
