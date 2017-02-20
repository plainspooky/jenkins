#include<stdio.h>

int main(int argc, char **argv){

    int num_params;

    num_params = argc-1;

    if ( num_params<1 ){
        printf("sem argumentos!\n");
        return 2;
    } else {
        if ( num_params==1 ){
            printf("foi passado 1 argumento.\n");
        } else {
            printf("foram passados %i argumentos.\n", num_params);
        }
        return 0;
    }
}
ERRO
