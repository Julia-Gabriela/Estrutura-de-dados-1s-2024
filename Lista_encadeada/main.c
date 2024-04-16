#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char* argv[]){

    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiar_lista(H);
/*
    No* H = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);
    No* n4 = no('D', NULL);
    No* n5 = no('E', NULL);
    No* n6 = no('F', NULL);

    inserir_no(H, n2);
    inserir_no(H, n3);
    inserir_no(H, n4);
    inserir_no(H, n5);
    inserir_no(H, n6);
*/
    imprimir_lista(H);
    printf("\n");
    imprimir_lista(Hc);

    H->proximo_no->valor ='X';
    Hc->valor ='U';

    imprimir_lista(H);
    printf("\n");
    imprimir_lista(Hc);

    printf("\n qnt = %d", qnt_nos(H));
    printf("\n copia qnt = %d", qnt_nos(Hc));

    exit(0);
}