#include <iostream>
#include "Counter.h"

using namespace std;
int main(){
    int n;
    Counter c1,c2;
    for(int i=0; i<=100; i++){
        cout << "contatore 1:"<< c1.getValue() << "\n";
        c1.increase(1);
        
        
    }
     
    
    cout << "contatore 2:"<< c2.getValue() << "\n";
    

    return 0;
}