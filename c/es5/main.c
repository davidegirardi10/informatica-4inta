#include <stdio.h>
int calcolaLunghezzaStringa(const char *stringa){
    int len=0;
    while(*stringa!='\0'){
        len++;
        stringa++;
    }


 return len;
}
int sommaArray(int *array, int dimensione){
    int i,somma=0;
    for(i=0;i<dimensione;i++){
        somma=somma+(*array);
        array++;
    }
    return somma;
}
int main (){
int array[10]={2,1,1,1,1,1,1,1,1,1},a;
a=sommaArray(&*array, 10);
printf("la somma vale: %d",a);

return 0;
}