/*CABECALHO
   Programa: Uma indústria faz a folha mensal de pagamentos de seus 80 empregados baseada no
             seguinte: Existe uma tabela com os dados de cada funcionário (matrícula, nome e salário
             bruto); Escreva um algoritmo que leia e processe a tabela e emita, para cada funcionário,
             seu contracheque, cujo formato é dado a seguir:
                Matrícula:
                Nome:
                Salário Bruto:
                Dedução INSS:
                Salário Liquido:
             O desconto do INSS é de 12% do salário bruto.
             O salário líquido é a diferença entre o salário bruto e a dedução do INSS.
   Arquivo: funcionario.c
   Versão: 1.1
   Objetivo: Criar e manipular varios dados do funcionário
   Autor(a): Antonio Alves dos Santos Neto

ALGORITMO funcionario
//Seção de Declarações
<definições de constantes>
    Constante N 80
    Constante cInss 0.12
<definições de estruturas>
    REGISTRO funcionario
        CADEIA DE CARACTERES matricula, nome
        REAL salarioB, salarioL inss
    FIM REGISTRO
<definições de variáveis>
    funcionario fun[N]

Inicio
  Para (int i=0; i<N; i++)
    Imprima("Entre com o nome: ")
    leia(fun[i].nome)
    Imprima("Entre com a matricula: ")
    leia(fun[i].matricula)
    Imprima("Entre com o salario bruto: ")
    leia(fun[i].salarioB)
    fun[i].inss = fun[i].salarioB * cInss
    fun[i].salarioL =  fun[i].salarioB - fun[i].inss 
  Fim Para  

FIm