#include <stdio.h>

float AsignarValor(){
    float Respuesta;
    printf("Ingrese el valor a asignar:\n");
    scanf("%f",&Respuesta);
    return Respuesta;
}

void Suma(float A,float B){
    printf("El Resultado es: %f \n",A+B );
}

void Resta(float A,float B){
    printf("El Resultado es: %f \n",A-B );
}

void Multiplicacion(float A,float B){
    printf("El Resultado es: %.2f \n",A*B );
}

void Division(float A,float B){
    printf("El Resultado es: %.2f \n ",A/B );
}

void Factorial(float A){
    int Rta=(int)A;
    int I=(int)A;
    printf("%i %i",&Rta,&I);
    system("pause");
    for(I;I>1;I--){
        Rta=Rta*I;
        printf("%i\n",&I);
    }
    printf("La Respuesta es: %.2f \n",&Rta);
}


