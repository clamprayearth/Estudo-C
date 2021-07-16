/*CABECALHO
Arquitetura do jovem Neumann
Neumann (um jovem engenheiro) foi contratado para criar um nova arquitetura de computador que preve a operação eficiente 
de duas instruções matemáticas (soma e subtração) e uma instrução de impressão. O computador possui  posição de memória, 
endereçadas de  a , e cada posição pode armazenar um inteiro. Inicialmente, todas as posições contêm o valor zero. 
As intruções funcionam da seguinte forma:
    SOMA a b x: dados os endereços a e b (1<=a,b<=N) e um valor inteiro x, o computador deve somar x em todas as posições i
    SUBTRACAO a b x: dados os endereços a e b (1<=a,b<=N) e um valor inteiro x, o computador deve subtrair x em todas as posições i
    IMPRIME i: dado um endereço i (1<=i<=N), o computador imprime na saída o valor atual armazenado na posição i da memória.

   Arquivo: mEP1.c
   Versão: 0.1
   Objetivo: Mini programa para avaliação de estrutura de dados
   Autor(a): Antonio Alves dos Santos Neto
*/

//<definições de bibliotecas>
#include <stdio.h>
#include <stdlib.h>

//Inicio
int main(){
    //Seção de Declaraçõe
//<definições de variáveis>
    long int N;
    int M;
    int opera;
    long int a;
    long int b;
    long int i;

    scanf ("%ld %d", &N, &M);// --> Entrada de dados (tamanho da vetor posicao e numero de instruções)
    long int *posicao = calloc(N, sizeof(long int));// --> Alocação para o vetor posição
    
    /* Todo o processamento do programa esta nesse bloco. Primeiro é verificado a operação depois cada case faz as operações:
        O case 1: Ler as variveis a b i e soma conforme  o for com a= valor inicial e b = valor final e soma i as posições.
        O case 2: Idem ao 1 porem ao inves de soma subtrai i as posições.
        O case 3: Imprime a posição i. */
    for (int j = 0; j<M; j++){
        scanf("%d", &opera);
        switch (opera){
            case 1:
            scanf("%ld %ld %ld", &a, &b, &i);
            for(int h=a-1; h<=b-1; h++)
                posicao[h] += i;
            break;
            case 2:
            scanf("%ld %ld %ld", &a, &b, &i);
            for(int h=a-1; h<=b-1; h++)
                posicao[h] -= i;
            break;
            case 3:
            scanf("%ld", &i);
            printf("%ld\n", posicao[i-1]);
            break;
        }
    }

    free(posicao);
    posicao = NULL;// --> Liberação de memoria do vetor posição alocado

    return 0;// --> valor de retorno para a função principal (/indicando que o programa acabou)  
}
//Fim