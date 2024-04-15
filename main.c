#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    ///Declaracion e inicializacion

    char A[10] = {'c', 'a', 'r', 'o', '\0'};
    char B[10] = {"caro"};
    char C[10] = "caro";
    char D[30];
    char E[30];

    /// Carga con scanf vs/ gets

    printf("Ingrese una palabra\n");
    scanf("%s", &D);
    gets(E);

    /// Mostrando con printf o puts
    printf("El arreglo E es: ");
    puts(E);

    ///STRLEN
    int tamanio = strlen(E);

    ///STRCPY
    char F[30];
    strcpy(F, E);

    ///STRCMP/STRCMPI
    strcmp(B, C);

    ///STRSTR
    char P[30] = {Juan Pedro};
    char Q[30] = "Pedro";
    strstr(P, Q);

    ///STRCAT
    char T[30] = {"Juan"};
    chat Y[30] = " Pedro";
    strcat(T, Y);

    ///TOLOWER/TOUPPER (CTYPE)
    for (int i = 0; i< strlen(T); i++){
        toupper(R[i]);
    }

    return 0;
}
