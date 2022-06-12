#include <iostream>
#include "Jungle.h"

Jungle::Jungle(int n) : totalFall(0) , index(0) {

    numberOfAnimals=n;
    animals = new Animal*[numberOfAnimals];

    for(int i = 0; i < numberOfAnimals ; ++i) {
        animals[i] = new Animal[1];  // making an object of Animal class for each animal
    }
}

int Jungle::getTotalFall() const {
    return totalFall;
}

int Jungle::getNum() const {
    return numberOfAnimals;
}

int Jungle::getIndex() const {
    return index;
}

void Jungle::AddAnimal(Animal *m) {
    m->setPosition(rand() % length, rand() % width);  //setting an standard random location for each animal
    animals[index]=m; // animal[index] has been initialized as an object of Animal class in constructor. now initializing its object by the argument
    index++;
}  //to give each animal a position in jungle, we should call this function for all indexes(animals).

void Jungle::movement() {

    for (int i = 0; i < numberOfAnimals; ++i){
        (*(animals[i])).move(rand() % 5, rand() % 5);  //updating location of animal successfully

        if ( animals[i]->isInPit(xx, yy, r) ){
            (*animals[i]).fall();
            this->totalFall++;
        }
    }
}