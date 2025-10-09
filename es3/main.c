#include <stdio.h>
int main (){
    int x = 19;
    int *ptr = &x;
    printf("%d",*ptr);

    (*ptr)++;
     printf("\n%d",x);


    return 0;
}