#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat constructed\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat copied\n";
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assigned\n";
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destroyed\n";
}

void Cat::makeSound() const {
    std::cout << "Meow! \n";
}
