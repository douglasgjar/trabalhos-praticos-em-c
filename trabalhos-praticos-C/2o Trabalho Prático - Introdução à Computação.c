/*UNISANTOS � Universidade Cat�lica de Santos
Centro de Ci�ncias Exatas e Tecnol�gicas
Ci�ncias da Computa��o e Sistemas de Informa��o
Introdu��o � Computa��o I

2� Trabalho Pr�tico

Douglas Gomes Jardim

Trabalho apresentado ao Curso de Ci�ncias da Computa��o e Sistemas de Informa��o do Centro de Ci�ncias Exatas e Tecnol�gicas
da Universidade Cat�lica de Santos como m�todo de avalia��o da disciplina de Introdu��o � Computa��o I.
Professor: Ciro Cirne Trindade
*/


#include <stdio.h>
int main ()
{
    //DECLARA��O DE VARI�VEIS
    int num_membros, x, y, voto, voto_tot = 0, sim = 0, nao = 0, nulo = 0;

    //LENDO O N� DE MEBROS E A PCTAGEM DESEJADA (FORMATO X/Y) PARA QUE O PROCESSO SEJA APROVADO
    scanf ("%d %d/%d",&num_membros, &x, &y);

    //LA�O QUE FAZ COM QUE TODOS OS VOTOS SEJAM LIDOS
    while (voto_tot++ < num_membros){
        //L� O VOTO
        scanf ("%d",&voto);
        //ATRIBUI��O DO VOTO
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
    //C�LCULO PARA SABER A QNTD DE VOTOS A FAVOR NECESS�RIA, PARA QUE O PROCESSO SEJA ACEITO
    voto_tot = x*(voto_tot/y);
    //VERIFICANDO SE O PROCESSO EST� APTO OU N�O, BASEADO NA % DOS VOTOS
    if (sim >= voto_tot){
        printf("SIM");
    }
    else{
        printf ("NAO");
    }
    return 0;
}
