#include "scanner.h"

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
            printf("\nSeparador: ,");
            aux_cadena = 0;
        }
        else if (isspace(leyendo))                  // ES ESPACIO
        {
            aux_cadena = 0;
            break;
        }
        else                                        // ES CADENA
        {
            token = CAD;
            if (aux_cadena==0)
            {
                printf("\nCadena: %c",leyendo);
                aux_cadena=1;
            }
            else
            {
                printf("%c",leyendo);
            }
        }
        leyendo = getchar();
    }
    printf("\nFin De Texto: ");
}