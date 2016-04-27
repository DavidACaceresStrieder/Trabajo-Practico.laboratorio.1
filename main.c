#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float A,B;
    int flag1=0,flag2=0;


    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                A=AsignarValor();
                flag1=1;
            break;

            case 2:
                B=AsignarValor();
                flag2=1;
            break;

            case 3:
                if(flag1==0 && flag2==0){
                    printf("Imposible realizar el calculo. No se ingresaron uno o ambos Operandos\n");
                    system("pause");
                }else{
                    Suma(A,B);
                    system("pause");
                }
            break;

            case 4:
                if(flag1==0 && flag2==0){
                    printf("Imposible realizar el calculo. No se ingresaron uno o ambos Operandos\n");
                    system("pause");
                }else{
                    Resta(A,B);
                    system("pause");
                }
            break;

            case 5:
                if(flag1==0 && flag2==0){
                    printf("Imposible realizar el calculo. No se ingresaron uno o ambos Operandos\n");
                    system("pause");
                }else{
                    Multiplicacion(A,B);
                }
            break;

            case 6:
                if(flag1==0 && flag2==0){
                    printf("Imposible realizar el calculo: No se ingresaron uno o ambos Operandos\n");
                    system("pause");
                }else{
                    if(B==0){
                        printf("Imposible Realizar el calculo: No se puede dividir por 0(Cero)\n ");
                        system("pause");
                    }else{
                        Division(A,B);
                        system("pause");
                    }
                }
            break;

            case 7:
                if(flag1==0){
                    printf("Imposible realizar el calculo. No se ingreso el valor de A\n");
                    system("pause");
                }else{
                    Factorial(A);
                    system("pause");
                }
            break;

            case 8:
                if(flag1==1 && flag2==1){
                    Suma(A,B);
                    Resta(A,B);
                    Multiplicacion(A,B);
                    Division(A,B);
                    Factorial(A);
                    system("pause");
                }else{
                    printf("Imposible realizar el calculo. No se ingresaron uno o ambos Operandos\n");
                    system("pause");
                }
            break;

            case 9:
                return 0;
            break;
        }
    }
}
