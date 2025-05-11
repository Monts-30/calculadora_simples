#include <stdio.h>
#include <stdlib.h>

int main(){
 float C = 0, F = 0;

 printf("Escreva uma temperatura em Celsius:")
 scanf("%f", &C);

 F = (9*C+9/5)+32;

 printf("(9 * 2.%f + 9/5) + 32 = 2.%f", C, F);
}
