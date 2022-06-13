#include <stdio.h>
#include <stdlib.h>

int menu();

void saludar();

// void brindar();
//void despedir();

//void confirmarSalida(char* p);

int main()
{
    char salir='n';

    do{

        //switch(menu())  reemplazar para modularizar la funcion menu
        switch (menu())
        {
            case 1: saludar(); // usar funciones
            break;

            case 2:
                printf("brindar\n");
                system ("pause");
                break;
            case 3:
                printf("despedir\n");
                system ("pause");
                break;
            case 4:
                printf("Salir\n");
                printf("Confirma salida?");
                fflush(stdin);
                scanf("%c", &salir);
                break;
            default:
                printf("Opcion invalida\n\n");
                system("pause");

        }

        system("pause"); // ponerlo aca y puedo sacarlo de cada case porque aplica a todos

    }
    while(salir!='s');


    return 0;
}





int menu(){
    int opcion;
    system("cls");
    printf("***Menu de opciones***\n\n"); // \n\n para que haya dos lineas de espacio y quede como titulo
    printf("1- Saludar \n");
    printf("2- brindar \n");
    printf("3- despedir \n");
    printf("4_ Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    system("cls");
    return opcion;}


    void saludar(){
    printf("Saludar\n");
    system ("pause");
    }


    /*void confirmarSalida(char* p){
    char confirma;
    printf("Confirma salida?);
    fflsuh(stdin);
    scanf("%c", &confirma);

    //asigno el valor de la variable confirma a la variable salir de main
    // a traves de p que recibe la direccion de salir

    *p = confirma;
    }*/
