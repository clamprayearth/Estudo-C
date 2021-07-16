/*CABECALHO
Problema: Uma das grandes novidades de São Mateus (se você não está na cidade, talvez não esteja sabendo) é a nova linha ferrea, controlada pela Sama-Trens que liga a 
          cidade à capital do estado (Vitória). Como a demanda de viagens cresceu muito, a empresa teve que comprar mais trens para conseguir atender os passageiros. 
          Com a aquisição de novos trêns, a empresa contratou o jovem Dennis Ritchie para organizar os vagões que serão utilizados em cada viagem. Apesar de ser trabalhosa, 
          sua tarefa é relativamente simples, juntar os vagões de dois trens para formar um único trem. Por exemplo, se o primeiro trem possui 5 vagões e o segundo 3, o novo 
          trem deve possuir 8 vagões.

          Cada vagão possui um identificador (um número inteiro) e os vagões de um trem estão sempre em ordem não-decrescente (um requistio da empresa). 
          Assim, Dennis deve formar o novo trem respeitando esse requisito da Sama-Trens. Mesmo Dennis sendo um grande conhecedor de programação, ele está muito cansado 
          e te pediu ajuda para construir um programa que realiza a junção dos trens. Para a brincadeira ficar mais emocionante, ele quer que seja usado listas encadeadas 
          para resolver o problema.

        Tarefa
          Sua tarefa, nesse problema, é implementar uma função que recebe duas listas ordenadas e retone uma nova lista contendo a 
          junção das listas passadas como argumento. A nova lista também deve estar ordenada (de forma não-decrescente).

Arquivo: mEP3.c
Versão: 0.1
Objetivo: Mini programa para avaliação de estrutura de dados
Autor(a): Antonio Alves dos Santos Neto
*/
#include <stdio.h>
#include <stdlib.h>

//Inicio
int main (){
// vetor = vetor que queremos ordenar
    //int tamLista1;
    //int tamLista2;
    int vetor[]  = { 9, 5, 7, 2 };

    // aux = variável que usaremos para guardar o maior valor de cada comparação
    int aux = 0;
    //int tam = sizeof(vetor[]);

   for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (vetor[i] < vetor[j]){
    //aqui acontece a troca, do maior cara  vaia para a direita e o menor para a esquerda
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            }
        }
    }

    for(int i=0; i<4; i++){
        printf("%d ", vetor[i]);
    }
}