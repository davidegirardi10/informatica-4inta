#include <stdio.h>

void stampaArray(int *array, int dimensione){
    
    int i;
    for(i=0;i<dimensione;i++){
    printf(" %d\n",array[i]);
}
}
int main (){
int array[10]={1,1,1,1,1,1,1,1,1,1};
stampaArray(array, 10);


return 0;
}