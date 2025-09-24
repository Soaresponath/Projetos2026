#include <stdio.h>


int main (){

    int a = 5;
    int b = 10;
    int c = 5;

    //Operadores lógicos
    //&& (E) - todas as condições precisam ser verdadeiras
    //|| (OU) - pelo menos uma condição precisa ser verdadeira
    //! (NÃO) - inverte o valor lógico

    if (a == b && b > c){
        printf("Condição verdadeira\n");
    } else {
        printf("Condição falsa\n");
    }

    if (a == b || b > c){
        printf("Condição verdadeira\n");
    } else {
        printf("Condição falsa\n");
    }

    if (!(a == b)){
        printf("Condição verdadeira\n");
    } else {
        printf("Condição falsa\n");
    }

    return 0;
}