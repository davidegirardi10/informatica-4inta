#include <stdio.h>
void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media){

    for(int i =0; i<dimensione ; i++){
        *somma=*somma+array[i];
    }
    *media=*somma/dimensione;
}




int main (){
int arr[10]={1,1,1,1,1,1,1,1,1,1},somma=0 ;
float media=0;
calcolaSommaEMedia( arr, 10,&somma,&media);
printf("questa e la somma: %d\n",somma);
printf("questa e la media: %f\n",media);





return 0;
}