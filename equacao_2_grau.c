//CABECALHO
  // Programa: Faça um programa para calcular as raizes reais de uma equacao do 2 grau ( ) dado
    //         que seus coeficientes são informados pelo usuário.
   //Arquivo: equacao_2_grau.c
   //Versão: 1.1
   //Objetivo: Calcular uma função do 2 grau dado as variaveis A, B e C
   //Autor(a): Antonio Alves dos Santos Neto


//ALGORITMO equação
#include <stdio.h>
#include <math.h>

int main(){
//Seção de Declarações
//<definições de variáveis>
    float a, b, c, delta, raiz1, raiz2;
//INÍCIO
//Seção de Instruções

//Entrada de dados
    printf("Informe o valor de A: ");
    scanf("%f",&a);
    printf("Informe o valor de B: ");
    scanf("%f",&b);
    printf("Informe o valor de C: ");
    scanf("%f",&c);


// Calculo do valor de delta
    delta = pow(b,2)-4*a*c;

//Caso delta > 0 vai calcular duas raizes
//Caso delta = 0 calcula uma raiz
//Caso delta < 0 não calcula a raiz*/
    if (delta > 0){
        raiz1 = (-b+sqrt(delta))/(2*a);
        raiz2 = (-b-sqrt(delta))/(2*a);
        printf("Raiz 1: %f\n", raiz1);
        printf("Raiz 2: %f", raiz2);
    } else if (delta = 0){
        raiz1 = (-1)*b+(2*a);
        raiz1 = raiz2;
        printf("Raiz unica: %f", raiz1);
    } else{
        printf("Não existe raiz real");
    } 
    return 0;
}