#include "Zombie.hpp"
#include <iostream>

int main(){
    //creamos zombie en el heap y lo anunciamos
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; //liberamos memoria

    //creamos un zombie en el stack y se anuncia
    randomChump("StackZombie");

    return 0;
}