#include <stdio.h>
#include <stdlib.h>

char* allocastringa(int dimensione){

char *ptr= (char*)malloc(sizeof(char)*(dimensione+1));
ptr [dimensione+1]='\0';
return ptr;
}


int main (){
int dimensione;
printf("Inserisci la dimensone della stringa: ");
scanf("%d",&dimensione);
char *stringa;
stringa = allocastringa(dimensione);






return 0;
}