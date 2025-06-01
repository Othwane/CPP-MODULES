#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; ++i) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "--- Making sounds ---\n";
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    std::cout << "--- Deleting animals ---\n";
    for (int i = 0; i < size; ++i)
        delete animals[i];

    std::cout << "--- Deep copy test ---\n";
    Dog basic;
    basic.makeSound();

    Dog copy = basic;
    copy.makeSound();

    return 0;
}
