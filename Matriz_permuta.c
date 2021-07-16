/*CABECALHO
   Programa: Opção 1: Determinar se uma matriz quadrada de tamanho n (com N = 4) é uma matriz de
             permutação. Uma matriz quadrada é chamada de matriz de permutação se seus elementos
             são apenas 0’s e 1’s e se em cada linha e coluna da matriz existe apenas um único valor 1.
             Exemplo: A matriz exposta a seguir é uma matriz de permutação.
             1 0 0 0
             0 0 0 1
             0 0 1 0
             0 1 0 0
   Arquivo: Matriz_permuta.c
   Versão: 1.1
   Objetivo: Prova questão 2 de Programação Estruturada
   Autor(a): Antonio Alves dos Santos Neto

ALGORITMO Matriz Permuta
//Seção de Declarações
<definições de constantes>
   Constante N 4
<definições de variáveis>
   inteiro conta = 0
   /*Como na questão não informa que o usario tenha que colocar
   os valores da matriz eu coloquei para testar a matriz inicializada abaixo*//*
   inteiro matriz[N][N] ={ {1, 0, 1, 0},
                           {1, 0, 1, 0},
                           {1, 0, 1, 0},
                           {1, 0, 1, 0}
                        };
Inicio
   Para (inteiro i=0; i<N; i++)
      Para (inteiro j=0; j<N; j++)
         //Primeiro testo se algum elemento da matriz é diferente de 0 ou 1
         se (matriz[i][j] != 1) ou (matriz[i][j] != 0) então
            imprima("Matriz não é Permutada")
            break
         Fim se
         //Depois conta os numeros de 1 em cada linha
         se (matriz[i][j] == 1) então
            conta = conta + 1
         Fim se
      Fim Para 
      //Caso os numeros de 1 nas linhas for maior que 1 o programa sai e testa que não é permutada
      se (conta > 1) então
         imprima("Matriz não é Permutada")
         break
      Fim se
      conta = 0
   Fim Para

   //Caso os dois teste acima passa com o valor de conta iqual a zero, testo o número de 1 em cada coluna
   se (conta ==0) então
      Para (inteiro i=0; i<N; i++)
         Para (inteiro j=0; j<N; j++)
            se (matriz[j][i] == 1) então
               conta = conta + 1
            Fim se
         Fim Para
         //Caso conta for maior que 1 existe alguma coluna com 1 repetido
         se (conta > 1) então
            imprima("Matriz não é Permutada")
            break
         Fim se
         conta = 0
      Fim Para      
   Fim se

   //Se passou em todos os teste então é permutada
   se (conta == 0) então
      Imprima("A matriz é permutada")
   senão
      Imprima("Nâo é permutada")
   Fim se
Fim
*/                        


//<definições de bibliotecas>
#include <stdio.h>

//<definições de constantes>
   #define N 4

//Inicio
int main(){
   //Seção de Declaraçõe
//<definições de variáveis>
   int conta = 0;
   int ePermuta = 1;
   /*Como na questão não informa que o usario tenha que colocar
   os valores da matriz eu coloquei para testar a matriz inicializada abaixo*/
   int matriz[N][N] ={ {1, 0, 0, 0},      /* linha 0 */
                       {0, 0, 0, 1},      /* linha 1 */
                       {0, 1, 0, 0},      /* linha 2 */
                       {0, 0, 1, 0}       /* linha 3 */
                     };
   
   for (int i=0; i<N; i++){
      for (int j=0; j<N; j++){
         //Primeiro testo se algum elemento da matriz é diferente de 0 ou 1
         if (matriz[i][j] != 1 || matriz[i][j] != 0){
            ePermuta = 0;
            break;
         }
         //Depois conta os numeros de 1 em cada linha
         if (matriz[i][j] == 1){
            conta = conta + 1;
         }
      }
      //Caso os numeros de 1 nas linhas for maior que 1 o programa sai e testa que não é permutada
      if (conta > 1){
         ePermuta = 0;
         break;
      }
      conta = 0;
   }

   //Caso os dois teste acima passa com o valor de conta iqual a zero, testo o número de 1 em cada coluna
   if (conta == 0){
      for (int i=0; i<N; i++){
         for (int j=0; j<N; j++){
            if (matriz[j][i] == 1){
               conta = conta + 1;
            }
         }
         //Caso conta for maior que 1 existe alguma coluna com 1 repetido
         if (conta > 1){
            ePermuta = 0;
            break;
         }
         conta = 0;
      }      
   }

   //Se passou em todos os teste então é permutada
   if (conta == 0 || ePermuta == 1){
      printf("A matriz é permutada");
   } else{
      printf("Nâo é permutada");
   }
    return 0;
}
//fim