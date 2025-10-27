#include "Cerchio.h"
#include <iostream>
#include <cmath>

using namespace std;

Cerchio::Cerchio(){
    raggio=1;
    pi_val = M_PI;
}
void Cerchio::setRaggio(int _raggio){
    raggio = _raggio;
}
float Cerchio::getArea(){
    return (raggio*raggio) *M_PI;
}
float Cerchio::getCirconferenza(){
    return 2*raggio*M_PI;
}
int Cerchio::getRaggio(){
    return raggio;
}
