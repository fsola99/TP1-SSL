#include "scanner.c"

int main ()
{
    char token;
    char buffer[TAM_MAX];
    
    token = get_token(buffer);

    while(token != FDT)
    {
        if(token == CAD)
        {
            printf("Cadena: ");
        }
        else if (token == SEP)
        {
            printf("Separador: ");
        }

        printf("%s\n",buffer);

        vaciar_array(buffer);
        
        token = get_token(buffer);
    }
    printf("Fin de Texto: \n");
    return EXIT_SUCCESS;
}