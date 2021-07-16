#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int *p = NULL;
    int variavel = 109;
    int endereco = 0;
    endereco = &variavel;
    p = endereco; 
    
    printf("%d", *p);
    return 0;
}