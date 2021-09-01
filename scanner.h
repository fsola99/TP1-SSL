#ifndef SCANNER_H_
#define SCANNER_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

#define TAM_MAX 100

enum t_token {
    FDT,
    SEP,
    CAD
};

enum t_token get_token ();

void vaciar_array(char* buffer);

#endif