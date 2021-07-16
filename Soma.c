#include <stdio.h>

int main(){
    //declaração de variaveis
    int num1, num2, multipiicar;

    //Entrada de dados
    scanf("%d%d", &num1, &num2);

    //Processamento
    multipiicar = num1 * num2;

    //Saida de dados
    if (multipiicar%2 == 0){
        printf("Valor par!");
    } else {
        printf("Valor impar!");
    };

    return 0;
}