#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char* argv[]){

    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiar_lista(H);

    imprimir_lista(H);
    printf("\n copia\n");
    imprimir_lista(Hc);

    H->proximo_no->valor = 'X';
    Hc->valor = 'U';

    printf("\n");
    imprimir_lista(H);
    printf("\n copia\n");
    imprimir_lista(Hc);

    liberar_lista(Hc);
    
    printf("\n qtd = %d", quantidade_nos(H));
    
    printf("\nB existe na lista? %d\n", verificar_existencia(H,'X'));
    printf("\nB occore quantas vezes na lista? %d\n", verificar_ocorrencias(H,'X'));

    imprimir_inversa(H);

    exit(0);
}