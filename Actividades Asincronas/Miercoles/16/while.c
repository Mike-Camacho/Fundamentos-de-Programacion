#include<stdio.h>
int main()
{
    //Declarar variables
    int n,res,i;

    //Mensaje de bienvenida
    printf("\n\n\t\t\tSuma de los primeros n números\n\n");

    //Solicitar el número de elementos a sumar
    printf("¿Cuántos números deseas sumar?");
    scanf("%d",&n);

    //Sumar los n números
    res=0;
    i=1;
    while (i<=n)
    {
        res=res+i;
        i++;
    }
    
    /*
    n=5
    i=6
    res=15
    res=10+5=15
    */

    //Mostrar el resultado
    printf("La suma de los primeros %d números es: %d\n",n,res);
    
    return 0;
}