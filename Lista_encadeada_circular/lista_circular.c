#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"


No* no(char valor, No* proximo_no){
    No* no-> malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}
void inserir_no(No* H, char valor){
    if(H != NULL){
        if(H->proximo_no == NULL){
            H->proximo_no = no(valor);
        }
        else{
            No* tmp = H->proximo_no;
            while(tmp->proximo_no != H){
                tmp = tmp->proximo_no;
            }
            tmp->proximo_no = no(valor,H);
        }
    }
}
void imprimir_lista(No* H){

}
void remover_no(No* H, char valor){
    
}

