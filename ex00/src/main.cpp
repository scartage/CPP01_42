#include "Zombie.hpp"
#include <iostream>

/* Stack zombie: la memoria se gestiona automaticamente, tamaño limitado
adecuado para objetos de vida corta que no se necesitan fuera del ambito de creacion*/

/* Heap zombie: la memoria se gestiona de forma manual (new, delete)*/
int main(){
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZombie");

    return 0;
}