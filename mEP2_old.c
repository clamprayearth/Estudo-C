/*CABECALHO
   Programa: O jovem Alan começou a estudar matrizes e a multiplicação foi a operação que ele mais gostou. Dadas duas matrizes A e B, o produto entre as matrizes  
   A e B é a matriz C, onde  é obtido multiplicando-se os elementos da linha i da matriz A pelos elementos da coluna j da matriz B e somando os produtos obtidos.
   Como ele gostou tanto de multiplicações de matrizes, ele começou a pesquisar um pouco mais sobre o assunto. Uma das suas descobertas foi matriz de permutação. 
   Uma matriz de permutação é uma matriz quadrada binária (composta por zeros e uns) em que cada linha e cada coluna tem exatamente um número um. 
   Essa matriz tem o efeito de gerar uma permutação dos elementos de um vetor ou das linhas ou colunas de uma matriz.

   Uma vantagem das matrizes de permutação é que podemos economizar espaço representando a matriz apenas por um vetor  de tamanho p, em que cada posição representa 
   o número da linha que contém o um da matriz:

   Como outra paixão de Alan é programar, ele fez um programa que lê um vetor de permutação p e uma matriz quadrada B de ordem n e calcula o produto AXB . Entretanto, por ter 
   um computador com pouquíssima memória (hoje em dia não seria nem chamado de memória e sim de "uma vaga lembrança") não está conseguindo resolver o problema quando  
   é relativamente grande e, por isso, te pediu ajuda para desenvolver um programa mais robusto.

    Regras:
    O array p e a matriz B devem ser alocados dinamicamente;
    A matriz C e a matriz A (ou qualquer outro array/matriz) não podem ser alocados. Pense em com resolver o problema sem essas matrizes;
    Lembre-se de verificar se fez toda a desalocação de memória.

   Arquivo: mEP2.c
   Versão: 0.1
   Objetivo: Mini programa para avaliação de estrutura de dados
   Autor(a): Antonio Alves dos Santos Neto
*/

//<definições de bibliotecas>
#include <stdio.h>
#include <stdlib.h>

//Inicio
int main (){
   //Seção de Declaraçõe
//<definições de variáveis>
    int n;
    int *p;
    int *pB;
    
    scanf ("%d", &n); // --> Entrada de dados (tamanho da matriz)
    p = malloc(n * sizeof(int)); // --> alocação dinamica do vetor de permutação
    pB = (int *) malloc(n * n * sizeof(int)); // --> alocação dinamica da matriz B
    
    for(int i=0; i<n; i++){
        scanf ("%d", &p[i]); // --> Entrada de dados (valores para o vetor de permutação)        
    }

    /*O raciocionio aqui é que os elementos são colocados, logo de cara, em seus lugares finais
    atraves do vetor de permutação. 
    ex: p = {3 2 1} logo os 3 primeiros será colocada na linha 3; os 3 segundos na linha 2; e os 3 ultimos na linha 1*/
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf ("%d", &pB[(p[i]-1) * n + j]); // --> Entrada de dados (valores para a matriz B)
        }
    }

    //Impressáo da matriz B.  
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", pB[i * n + j]);// --> Saida de dados (valores para a matriz B)
        }
        printf("\n");
    }
    
    //Liberar a memoria alocada 
    free(p);
    free(pB);
}