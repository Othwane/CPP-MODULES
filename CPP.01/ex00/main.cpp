#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

int main(){
	Zombie* zombie = newZombie("OTHMANE");
	zombie->announce();
	randomChump("aaan");
	delete zombie;
}
