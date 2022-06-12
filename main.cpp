#include <iostream>
#include "Jungle.h"
#include "Animal.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"

using namespace std;

int main() {
    int n;
    cout<<"Enter the total number of animals";
    cin>>n;
    Jungle wildsObject(n/2) ;
    Jungle domesticsObject(n/2);
   // now the animals are made
    WildAnimal* tempObject1;
    for (int i = 0; i < n/2; ++i) {
        wildsObject.AddAnimal(tempObject1);  //animals are becoming added and customized successfully
    }
    DomesticAnimal* tempObject2;
    for (int i = 0; i < n/2; ++i) {
        domesticsObject.AddAnimal(tempObject2);  //animals are becoming added and customized successfully
    }
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < 1000; ++j) {
            wildsObject.movement();
        }}
    cout<<"The total fall of wild animals:\t"<<wildsObject.getTotalFall();

    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < 1000; ++j) {
            domesticsObject.movement();
        }
    }
    cout<<"\nThe total fall of domestic animals:\t"<<domesticsObject.getTotalFall();

    return 0;
}
