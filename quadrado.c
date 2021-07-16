#include <stdio.h>

int main(){
    //Declaração de variaveis
    float base;
    float expoente;
    float resultado = 1;

    //Entrada de dados
    printf("Base: ");
    scanf("%f", &base);
    printf("Expoente: ");
    scanf("%f", &expoente);

    //Processamento de base e expoente
    for(int i = 0; i < expoente; i++){
        resultado *= base ;
    }

    printf("Resultado: %f", resultado);

    return 0;
}