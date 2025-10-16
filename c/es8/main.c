#include <stdio.h>

void modificaVariabile(int *variabile){
    *variabile=42;

}
int main (){
int var=10;
modificaVariabile(&var);
printf("%d",var);



return 0;
}