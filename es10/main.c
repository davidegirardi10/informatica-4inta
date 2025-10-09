#include <stdio.h>
void copiaStringa(char *sorgente, char *destinazione){
    for(int i=0;i<4;i++){
        *destinazione = *sorgente;
        sorgente++;
        destinazione++;
    }
    *destinazione = '\0' ;
}




int main (){
char sorgente [5] = "ciao";
char destinazione [5];
printf("%s\n", sorgente);
copiaStringa(sorgente, destinazione);
printf("%s", destinazione);


return 0;
}