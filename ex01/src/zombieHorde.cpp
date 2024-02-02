#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N < 1){
        std::cout << "one or more zombies are necessary" << std::endl;
        return NULL;
    } if (name.empty()){
        std::cout << "the zombies need a name" << std::endl;
        return NULL;
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++){
        horde[i].setName(name);
    }
    return horde;
}