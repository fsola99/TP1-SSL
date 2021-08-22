#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int esComa (char a)
{
    if (a==',')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

enum tokens {E0F,esComa,isspace};

int get_token (tokens)
{
    int num=100;
    if (E0F)
    {
        num = 0;
    }
    else if (esComa)
    {
        num = 1;
    }
    else if (isspace)
    {
        num = 2;
    }
    return num;
}