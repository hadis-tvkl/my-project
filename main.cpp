#include <iostream>
#include "Jungle.h"
#include "Animal.h"
using namespace std;

int main() {
    Jungle wildsObject , domesticsObject;
    int n;
    cout<<"Enter the total number of animals";
    cin>>n;
    wildsObject(n/2);
    domesticsObject(n/2);   // now the animals are made

    for (int i = 0; i < n/2; ++i) {
        WildAnimal* tempObject;
        wildsObject.AddAnimal(tempObject);  //animals are becoming added and customized successfully

        for (int j = 0; j < 1000; ++j) {
            wildsObject.movement();
        }
    }
    cout<<"The total fall of wild animals:\t"<<wildsObject.getTotalFall();

    for (int i = 0; i < n/2; ++i) {
        DomesticAnimal* tempObject;
        domesticObject.AddAnimal(tempObject);  //animals are becoming added and customized successfully

        for (int j = 0; j < 1000; ++j) {
            domesticsObject.movement();
        }
    }
    cout<<"The totalfall of domestic animals:\t"<<domesticsObject.getTotalFall();

    return 0;
}
