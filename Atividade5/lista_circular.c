#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"


void liberar_lista(No* H){
    if (H != NULL)
        {
            liberar_lista(H->proximo_no);
            free(H);
        }
}
