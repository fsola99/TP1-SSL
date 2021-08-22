#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    FILE* entrada = fopen ("entrada.txt","r");
    FILE* salida = fopen ("salida.txt","wt");

    if (entrada == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
    {
        
    }

    return 0;
}