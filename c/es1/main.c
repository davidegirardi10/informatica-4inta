#include <stdio.h>
int main (){
    float a = 18.5;
    float *ptr = &a;
    printf("%f",*ptr);
    return 0;
}