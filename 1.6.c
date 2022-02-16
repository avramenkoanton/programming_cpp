
#include <stdio.h>

int main(){
   double C, F;
   printf("Введіть дійсне число градусів С:");
   scanf("%lf",&C);

   F = 9 * C / 5 + 32;
   printf("F=%g",F);
}