#include<stdio.h>
#include<stdlib.h>
#define N 9

//Insertion sort
int lista[N] = {3,2,4,1,8,9,5,6,0};

void insertion_sort(int *lista, int tamanho){

    for (int j = 1; j<tamanho; j++){
        int aux = lista[j];
        int i = j - 1;
        while (aux < lista[i] && i > -1){
            lista[i + 1] = lista[i];
            i = i - 1;
        }
        lista[i + 1] = aux;
    }
}

void main(){
    int k;
    printf("Lista Original: ");
    for(k=0 ; k<N ; k++){
        printf("  %d", lista[k]);
    }
    
    insertion_sort(lista, N);
    
    printf("\nLista ordenada: ");
    for(k=0; k<N; k++){
        printf("  %d", lista[k]);
    }
}
 