/*CABECALHO
   Programa: Vovô Cormen está viciado em jogo e vai ao cassino diariamente. Todo dia ele ganha ou perde uma certa quantia. Dada um certo valor , 
             representando uma sequencia de dias, Cormen quer saber qual foi o seu ganho acumulado máximo em k dias consecutivos.
             Os valores abaixo dão um exemplo para um período de 9 dias. Considerando k=4 dias, o ganho acumulado máximo foi de R$39 (entre os dias 2 e 5).
                1 4 2 10 23 3 1 0 20
   Arquivo: mEP1.c
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
    int k;
    int maior;
    int somapositivaP = 0;
    int somanegativaP = 0;
    int somapositivaM = 0;
    int somanegativaM = 0;
    int soma1 = 0; // --> Variavel para a conta da esquerda para a direita(obs: Olhar abaixo)
    int soma2 = 0; // --> Variavel para a conta da direita para a esquerda(obs: Olhar abaixo)
    
    scanf ("%d", &n); // --> Entrada de dados (tamanho da matriz)
    int *p = malloc(sizeof(int) * n); // --> alocação dinamica

    /*Caso náo haja memoria para alocar o programa aborta o processo
    senão continua normalmente*/ 
    if (p == NULL ){
        printf ("Sem memória \n");
        exit(1);
    } else {
        for(int i=0; i<n; i++){
            scanf ("%d", &p[i]); // --> Entrada de dados (valores para a matriz)        
        }

        scanf ("%d", &k); // --> Entrada de dados (Dias consecutivos, valor de K)
        
        /*Inicialização da variavel maior. Essa variavel vai aramazenar o maior valor da 
        matriz*/
        maior = 0;

        /*Primeiro o programa vai pecorrer o caminho da esquerda para a direita e tirar o maior valor*/
        for (int i=0; i<n; i++){
            if(maior < abs(*(p+i))){
                maior = *(p+i);
                somapositivaP = 0;
                somanegativaP = 0;
                somapositivaM = 0;
                somanegativaM = 0;
                for(int count=0 ; count < k; count++){
                    //Achando o maior valor o programa conta k vezes para esquerda e soma os valores    
                    if (i > count){ // --> Esse if é para que náo corra o risco de o programa pegar um valor fora do indice
                        if(*((p+i)-count) > 0){
                            somapositivaM += abs(*((p+i)-count));
                        } else {
                            somanegativaM += abs(*((p+i)-count));
                        }
                    }
                    //Depois o programa conta k vezes para direita e soma os valores
                    if (i < count){ // --> Esse if é para que náo corra o risco de o programa pegar um valor fora do indice
                        if(*((p+i)+count) > 0){
                            somapositivaP += abs(*((p+i)+count));
                        } else {
                            somanegativaP += abs(*((p+i)+count));
                        }
                    }
                }

                //Finalmente eu comparo as duas somas e escolho a maior
                if (abs(somapositivaM - somanegativaM) > abs(somapositivaP - somanegativaP)){
                    soma1 = somapositivaM - somanegativaM;
                } else {
                    soma1 = somapositivaP - somanegativaP;
                }
            }
        }

        //Depois o programa vai pecorrer o caminho da direita para a esquerda e tirar o maior valor
        for (int i=n-1; i<=0; i--){
            if(maior < abs(*(p+i))){
                maior = *(p+i);
                //Aqui eu reutilizei as variaveis somaE e somaD. Para isso eu reiniciei-as novamente
                somapositivaP = 0;
                somanegativaP = 0;
                somapositivaM = 0;
                somanegativaM = 0;
                for(int count=0 ; count < k; count++){
                    //Achando o maior valor o programa conta k vezes para esquerda e soma os valores    
                    if (i >= count){ // --> Esse if é para que náo corra o risco de o programa pegar um valor fora do indice
                        if(*((p+i)-count) > 0){
                            somapositivaM += abs(*((p+i)-count));
                        } else {
                            somanegativaM += abs(*((p+i)-count));
                        }
                    }
                    //Depois o programa conta k vezes para direita e soma os valores
                    if (i <= count){ // --> Esse if é para que náo corra o risco de o programa pegar um valor fora do indice
                        if(*((p+i)+count) > 0){
                            somapositivaP += abs(*((p+i)+count));
                        } else {
                            somanegativaP += abs(*((p+i)+count));
                        }
                    }
                }
            }
        }
        
        //Liberar a memoria alocada 
        free(p);    

        //Finalmente eu comparo as duas somas e escolho a maior
        if (abs(somapositivaM - somanegativaM) > abs(somapositivaP - somanegativaP)){
            soma2 = somapositivaM - somanegativaM;
        } else {
            soma2 = somapositivaP - somanegativaP;
        }
        
        //Agora eu comparo os dois lados, o que tirou o maior valor eu deduzo que seja a soma dos maiores valores consecutivos
        if (soma1 > soma2){
            printf("%d\n",soma1);
        } else {
            printf("%d\n", soma2);
        }

    }
}