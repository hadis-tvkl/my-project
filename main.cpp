#include <iostream>
#include "Jungle.h"
#include "Animal.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "ctime";
using namespace std;

int main() {
    srand (time(0));
    int n;
    cout<<"Enter the total number of animals";
    cin>>n;
    Jungle* object=new Jungle(n) ;
   // now the animals are made


    WildAnimal* tempObject1;
    for (int i = 0; i < n/2; ++i) {
        tempObject1=new WildAnimal();      //making an object for each animal
        object->AddAnimal(tempObject1);
    }
    DomesticAnimal* tempObject2;
    for (int i = n/2; i < n; ++i) {
        tempObject2=new DomesticAnimal();
        object->AddAnimal(tempObject2);  //animals are added
    }

        for (int i = 0; i < 1000; ++i) {
            object->movement();
        }
    cout<<"The total fall of animals:\t"<<object->getTotalFall();
    //cout<<"\nindex:"<<object->getIndex(); // adding process is working properly
    delete object;
    delete tempObject1;
    delete tempObject2;
    return 0;
}
