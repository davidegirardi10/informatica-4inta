#include <stdio.h>

void raddoppiaElementiArray(int *array, int dimensione){
     int i;
    for(i=0;i<dimensione;i++){
        array[i]*=2;
        //array[i]=array[i]*2; uguale a quello sopra 
        
    }
}
int main (){
int array[10]={1,1,1,1,1,1,1,1,1,1},i;
raddoppiaElementiArray(&*array, 10);
for(i=0;i<10;i++){
    printf(" %d\n",array[i]);
}



return 0;
}