/*UNISANTOS – Universidade Católica de Santos
Centro de Ciências Exatas e Tecnológicas
Ciências da Computação e Sistemas de Informação
Introdução à Computação I

2º Trabalho Prático

Douglas Gomes Jardim

Trabalho apresentado ao Curso de Ciências da Computação e Sistemas de Informação do Centro de Ciências Exatas e Tecnológicas
da Universidade Católica de Santos como método de avaliação da disciplina de Introdução à Computação I.
Professor: Ciro Cirne Trindade
*/


#include <stdio.h>
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    int num_membros, x, y, voto, voto_tot = 0, sim = 0, nao = 0, nulo = 0;

    //LENDO O Nº DE MEBROS E A PCTAGEM DESEJADA (FORMATO X/Y) PARA QUE O PROCESSO SEJA APROVADO
    scanf ("%d %d/%d",&num_membros, &x, &y);

    //LAÇO QUE FAZ COM QUE TODOS OS VOTOS SEJAM LIDOS
    while (voto_tot++ < num_membros){
        //LÊ O VOTO
        scanf ("%d",&voto);
        //ATRIBUIÇÃO DO VOTO
        switch (voto){
            case 1:
                sim++;
                break;
            case 0:
                nao++;
                break;
            case -1:
                nulo++;
                break;
            default:
                printf ("Codigo INVALIDO. Codigos permitidos:\n 1 = Sim\n 0 = Nao\n-1 = Abstencao ou Falta\n");
        }
    }
    //CÁLCULO PARA SABER A QNTD DE VOTOS A FAVOR NECESSÁRIA, PARA QUE O PROCESSO SEJA ACEITO
    voto_tot = x*(voto_tot/y);
    //VERIFICANDO SE O PROCESSO ESTÁ APTO OU NÃO, BASEADO NA % DOS VOTOS
    if (sim >= voto_tot){
        printf("SIM");
    }
    else{
        printf ("NAO");
    }
    return 0;
}
