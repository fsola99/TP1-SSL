#include "scanner.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void get_token ()
{
    enum t_token token;
    int aux_cadena = 0;
    
    char leyendo = getchar ();
    while (leyendo !=EOF)
    {
        if (leyendo == ',')                         // ES SEPARADOR
        {
            token = SEP;
            aux_cadena = 0;
            printf("Separador: ,\n");
        }
        else if (isspace(leyendo))                  // ES ESPACIO
        {
            aux_cadena = 0;
            leyendo = getchar ();
        }
        else                                        // ES CADENA
        {
            token = CAD;
            if (aux_cadena==0)
            {
                printf("Cadena: ");
                aux_cadena=1;
            }
            else
            {
                printf("%c",leyendo);
            }
        }
    }
    printf("Fin De Texto: ");
}