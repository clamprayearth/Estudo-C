/*CABECALHO
   Programa: Elabore um algoritmo / programa que calcula os valores de f(x,y) para x = 1,4,9,16,...,100 e y
             = 0,1,2,3,4,5, sendo que para cada x devem ser considerados todos os valores de y.
             Os valores (x,y) e f(x,y) devem ser escritos na tela como uma
             tabela, tal como mostrado no exemplo ao lado:
             f(x,y) = (x^2 + Y^2)/((X+y)!)
             OBS.: Sobre fatorial:
             0! = 1
             1! = 1
             2! = 2 * 1!
             N! = N * (N - 1)!
Observação: É obrigatório que sejam criadas pelo menos 2 funções, diferentes da função
main(). Para calcular o fatorial, deve-se utilizar recursão.
   Arquivo: funcaoXY.c
   Versão: 1.1
   Objetivo: Prova questão 3 de Programação Estruturada
   Autor(a): Antonio Alves dos Santos Neto

ALGORITMO funcao
//Seção de Declarações
<definições de constantes>
    Constante N 6
    Constante M 10
<definições de variáveis>
    Inteiro aux
    inteiro fun1[N][M]
    inteiro fun2[N][M]
    
<definições de funçõees>
    //Função do calculo fatorial
    funcao fatorial(inteiro n): REAL
        <definições de variáveis>
            Real vFatorial
    inicio
        se ( n <= 1 ) então
        //Caso base for iqual 1 então retorna 1
            retorne (1);
        Senão
            //Chamada recursiva
            vFatorial = n * fatorial(n - 1)
            retorne (vFatorial)
        Fim se
    fimfuncao
    //Função do calculo das funções
    funcao equacao1(Inteiro x, Inteiro y): REAL
    inicio
        retorne (x^2 + y^2)
    fimfuncao

    funcao equacao2(Inteiro x, Inteiro y): REAL
    inicio
        retorne fatorial(x+y)
    fimfuncao

Inicio~
    //Primeiro eu gerei os valores de x
    Para (inteiro i=1; i<=M; i++)
        Nessa decisão foi atribuido o valor 100 para aux por i = 10 tá
        dando 99.
        se (i == 10)
            aux[i] = 100;
        senão
            aux[i] = pow(i,2);
        Fim se
    Fim Para
    //Imprimi no formato pedido
    Imprima("F(x,y) X Y")
    Para (inteiro i=1; i<=M; i++)
        Para (inteiro j=0; j<N; j++) 
            fun1[i][j] = equacao1(j,aux[i]);
            fun2[i][j] = equacao2(aux[i],j);
            imprima(j i fun1[i][j] / fun2[i][j]);
        Fim Para
    Fim Para
}
FIm*/

//<definições de bibliotecas>
#include <stdio.h>
#include <math.h>
#include <conio.h>

//<definições de constantes>
   #define N 6
   #define M 10

//<definições de funçõees>
//Função do calculo fatorial
int fatorial(int n){
    //<definições de variáveis>
    float vFatorial;
    if ( n <= 1 ){
    //Caso base for iqual 1 então retorna 1
        return (1);
    }else{
        //Chamada recursiva
        vFatorial = n * fatorial(n - 1);
        return (vFatorial);
    }
}
//FunçÕES onde estão a equação da função
int equacao1(int x, int y){
    return (pow(x,2) + pow(y,2));
}
int equacao2(int x, int y){
    return fatorial(x+y);
}

int main(){
//<definições de variáveis>
    int aux[M];
    int fun1[N][M];
    int fun2[N][M];

    //Primeiro eu gerei os valores de x
    for(int i=1; i<=M; i++){
        /*Nessa decisão foi atribuido o valor 100 para aux por i = 10 tá
        dando 99.*/
        if (i == 10){
            aux[i] = 100;
        } else {
            aux[i] = pow(i,2);
        }
    }
    
    //Imprimi no formato pedido
    printf("F(x,y)  X   Y\n");
    for (int i=1; i<M; i++){
        for (int j=0; j<N; j++){ 
            fun1[i][j] = equacao1(j,aux[i]);
            fun2[i][j] = equacao2(aux[i],j);
            printf("%1d/%1d     %1d   %1d\n", fun1[i][j], fun2[i][j], aux[i], j);
            getch();
        }
    }
    return 0;
}