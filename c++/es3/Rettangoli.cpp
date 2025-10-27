#include "Rettangoli.h"
#include <iostream>

using namespace std;

Cerchio::Cerchio(){
    base = 1;
    altezza = 1;
}
void Cerchio::setBase(int _base){
    base = _base;
}
void Cerchio::setAltezza(int _altezza){
    altezza = _altezza;
}
int Cerchio::getArea(){
    return base * altezza;
}
int Cerchio::getPerimetro(){
    return (base + altezza) * 2;
}
int Cerchio::getBase(){
    return base;
}
int Cerchio::getAltezza(){
    return altezza;
}