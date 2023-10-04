#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int main(){
	Zombie *Zombies;
	int zN;
	std::cout << "How Many Zombies Do u need ?" << std::endl;
	std::cin >> zN;
	Zombies = zombieHorde(zN, "ZOMB");
	for (int i = 0; i < zN; i++){
		Zombies[i].announce();
	}
	delete[] Zombies;
	return 0;
}
