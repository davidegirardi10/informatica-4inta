#include <stdio.h>
int calcolaLunghezzaStringa(const char *stringa){
    int len=0;
    while(*stringa!='\0'){
        len++;
        stringa++;
    }


 return len;
}

int main (){
int a;
    a= calcolaLunghezzaStringa("Ciao mondo");
    printf("La stringa ha una lunghezza di: %d caratteri",a);

return 0;
}