#include <Zombie.hpp>

/*Ejemplo de como crear dinamicamente un objeto y devolver un puntero a ese objeto
	new:  operador para asignar memoria en el heap, simpre debe liberarse con delete*/
Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}
