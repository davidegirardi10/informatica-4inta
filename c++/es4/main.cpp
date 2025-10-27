#include "Cerchio.h"
#include <iostream>

using namespace std;

int main(){

    Cerchio cerc[5];
    for(int i=0; i<5; i++){
        cerc[i].setRaggio(i+1);
    }

    for(int i=0; i<5; i++){
        cout << "Cerchio con Raggio: " << cerc[i].getRaggio();
        cout << "\nArea: " << cerc[i].getArea();
        cout << " e circonferenza: " << cerc[i].getCirconferenza() << endl;
    }

    return 0;


}