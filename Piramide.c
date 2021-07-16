/*CABECALHO
   Programa: Opção 1: Dado uma quantidade de linhas N (informado pelo usuário), imprima na tela uma
                      pirâmide de números, como no exemplo:
                      N = 5
                      Pirâmide: 1
                      1 2
                      1 2 3
                      1 2 3 4
                      1 2 3 4 5
   Arquivo: Linhas.c
   Versão: 1.1
   Objetivo: Prova questão 1 de Programação Estruturada
   Autor(a): Antonio Alves dos Santos Neto

ALGORITMO Linha
//Seção de Declarações
<definições de variáveis>
    Inteiro N

Inicio
    Imprima("Entre como o numero N para a piramide: ")
    Leia (N)
    
    Para (inteiro i=0; i<N; i++)
        Para(inteiro j=0; j<i)
            imprima("j ")
        Fim Para
        imrima("\n")
    Fim Para
FIm*/

//<definições de bibliotecas>
#include <stdio.h>

//Inicio
int main(){

//Seção de Declarações
    //<definições de variáveis>
    int N;
    
    //Entradas de dados
    printf("Entre como o numero N para a piramide: ");
    scanf("%d", &N);

    /*Nesse loop eu coloquei os valores de i como cada linha da
    piramide. E dentro de cada linha eu escrevi uma variavel j que 
    vai de 1 até o valor de linha atual*/ 
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
    printf("\n");
    }
    return 0;
}
//Fim