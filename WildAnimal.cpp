#include <iostream>
#include "WildAnimal.h"

WildAnimal::WildAnimal(): Animal() {}

void WildAnimal::fall() {  //just in case of falling , need to separate the Animal class into subclasses
    std::cout << " #### Wild Animal fell ####" << std::endl;
}
