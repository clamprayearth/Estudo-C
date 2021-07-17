#include <stdio.h>
#include <stdlib.h>

#include "Racional.h"

#define AVISO(msg) fprintf(stdout, "AVISO: %s\n", #msg)
#define ERRO(msg) fprintf(stderr, "ERRO: %s\n", #msg)

/*Fiz uma forma de numeracao onde: 
O primeiro numero indica o tipo de alocacao:
    0 = alocacao dentro de funcao que retorna a propria alocacao
        ou seja nao precisa ser liberada pelo fato de esta sendo atribuido a outra variavel
    1 = alocacao normal, precisa ser liberada
O segundo numero e a ordem que a alocado aparece no codigo, exemplo:
    1 = Primeira alocacao
    2 = Segunda alocacao
    etc..*/

//Tipo em forma de numerador/denominador
struct racional {
    long num;
    long den;
};

//Inicializa a fracao com os valores n = numerador e d = denominador
Racional* inicializaRacional(long n, long d) {
    //if se caso o denominador for 0.
    if (d == 0) {
        printf("O denominador deve ser diferente de 0!\n");
        return NULL;
    }

    Racional* r = malloc(sizeof(Racional)); //0.1<-- alocacao de memoria
    if (r == NULL) {
        fprintf(stderr, "Sem memória!\n");
        exit(1);
    }
    r->num = n;
    r->den = d;
    return r;
}

//Funcao para desalocar memoria, o ponteiro e inicializado com null
void liberaRacional(Racional* r) {
    if (r != NULL) { //Evita a tentativa de desalocação de um ponteiro não alocado
        free(r);
        r = NULL; //Evita ponteiros soltos
    }
}

//Atribuir um valor para o numerador
void setNum(Racional* r, long n) {
    r->num = n;
}

//Atribuir um valor para o denominador
void setDen(Racional* r, long d) {
    //if se caso o denominador for 0.
    if (d == 0) {
        printf("O denominador deve ser diferente de 0!\n");
        return;
    }
    r->den = d;
}

//Retorna o valor do numerador
long getNum(Racional* r) {
    return r->num;
}

//Retorna o valor do denominador
long getDen(Racional* r) {
    return r->den;
}

//Imprime o valor do racional
void imprimeRacional(Racional* r) {
    //if para o caso do r nao tiver alocado
    if (r == NULL)
        printf("Racional nao definida\n");
    else
        printf("%ld/%ld\n", getNum(r), getDen(r));
}

Racional* multiplicaRR(Racional* r1, Racional* r2) {
    /* Retorna o resultado de r1*r2 */
    AVISO(Função 'multiplicaRR' implementada);

    Racional* r = malloc(sizeof(Racional)); //0.2<-- alocacao de memoria

    r->num = r1->num * r2->num;
    r->den = r1->den * r2->den;
    return r;
}


void multiplicaRI(Racional* r, long a) {
    /* Retorna o resultado de r*a */
    AVISO(Função 'multiplicaRI' implementada);

    r->num = r->num * a;
}

bool comparaRacional(Racional* r1, Racional* r2) {
    /* Retorna true se r1 == r2 e false, caso contrário */
    AVISO(Função 'comparaRacional' implementada);

    if ((r1->num % r2->num == 0) && (r1->den % r2->den == 0))
        return true;
    if ((r2->num % r1->num == 0) && (r2->den % r1->den == 0))
        return true;
    return false;
}

Racional* somaRR(Racional* r1, Racional* r2) {
    /* Retorna o resultado de r1+r2 */
    AVISO(Função 'somaRR' implementada);
    int resto;
    int num1 = r1->den;
    int num2 = r2->den;

    //repeticao para o calculo de MMC entre os dois denominadores
    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    int mmc = (r1->den * r2->den) / num1;

    Racional* r = malloc(sizeof(Racional)); //0.3<-- alocacao de memoria


    r->num = (mmc / r1->den) * r1->num + (mmc / r2->den) * r2->num;
    r->den = mmc;

    return r;
}

Racional* somaRI(Racional* r, long a) {
    /* Retorna o resultado da soma de r + a */
    AVISO(Ainda não implementei a função 'somaRR');

    Racional* rResult = malloc(sizeof(Racional)); //0.4<-- alocacao de memoria

    rResult->num = r->den * a + r->num;
    rResult->den = r->den;

    return rResult;
}
