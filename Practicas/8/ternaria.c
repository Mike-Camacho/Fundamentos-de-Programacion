#include <stdio.h>
/*
 Este programa permite calcular el error matemático a partir de dos
valores (a y b) ingresados desde la entrada estándar (el teclado), a partir
de la fórmula:
E = |a – b|
Donde a es el valor real y b es el valor aproximado o viceversa.
*/
int main(){
 double a, b, res;

 printf("Calcular el error matemático E = |a - b|\n\n");
 printf("Ingrese el valor de a:\n");
 scanf("%lf",&a);
 printf("Ingrese el valor de b:\n");
 scanf("%lf",&b);

 res = a < b ? b-a : a-b;

 printf("El error matemático de\n");
 printf("| %lf - %lf | es %lf\n", a, b, res);

 return 0;
}