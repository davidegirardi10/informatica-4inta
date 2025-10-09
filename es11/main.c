#include <stdio.h>
#include <stdlib.h>
int main (){
int a;
printf("Inserisci la dimensone del array: ");
scanf("%d",&a);

float *ptr;
ptr = (float*)malloc(sizeof(float)*a);
ptr [0]=12.3;
printf("%.2f",ptr[0]);


return 0;
}