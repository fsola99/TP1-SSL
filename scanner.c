#include "scanner.h"

enum t_token get_token (char* buffer)
{
    enum t_token token;
    
    char leyendo = getchar ();
    while (leyendo !=EOF)
    {
        if (isspace(leyendo))                               // ES ESPACIO
        {
            leyendo = getchar();
        }
        if (leyendo == ',')                                 // ES SEPARADOR
        {
            buffer[0]=',';
            token = SEP;
            return token;
        }
        if (isdigit(leyendo) || isalpha(leyendo) || ispunct(leyendo) && leyendo != ',')            // ES CADENA
        {
            int i = 0;
            while(isdigit(leyendo) || isalpha(leyendo) || ispunct(leyendo) && leyendo != ',')
            { 
                buffer[i]=leyendo;
                i++;
                leyendo = getchar();
            }
            ungetc(leyendo, stdin);
            buffer[i++] = '\0';
            token = CAD;
            return token;
        }
        leyendo = getchar();
    }
    token = FDT;
    return token;
}

void vaciar_array(char* buffer)
{   
    for (int i=0;i<=TAM_MAX;i++) 
    {
        buffer[i] = '\0';
    }
}