//Leer dos números e imprima cual es mayor y el menor de los números ingresados.

#include <stdio.h>

int main(){
    float num1, num2;

    printf("Escriba el primer numero: \n");
    scanf("%f", &num1);
    printf("Escriba el segundo numero: \n");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("El numero mayor es %.f", num1);
    } else if (num1 < num2){
        printf("El numero mayor es %.f", num2);
    }
    return 0;
}