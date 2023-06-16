/*Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os
seguintes campos: 
-marca: string de tamanho 15 
-ano: inteiro 
-cor: string de tamanho 10 
-preço: real
a) Escrever a definição da estrutura carro. 
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.
Crie um menu para: 
c) Cadastrar um carro no vetor vetcarros (verificando se há espaço disponível); 
d) Listar todos os carros com preço menor ou igual a um valor fornecido pelo usuário;
e) Listar todos os carros de uma determinada marca fornecida pelo usuário.*/
#include <stdio.h>

struct carros{
        char marca[15];
        int ano;
        char cor[10];
        float preco;
    };

    struct carros vetcarros[20];
    void cadastrar(int);
    void listarPreco(float, int);
    void listarMarca(char, int);

int main()
{
    int opcao, i = 0;
    float faixaPreco;
    char marca;

    do{
        i++;
        printf("Cadastrar:        1\n");
        printf("Listar por preco: 2\n");
        printf("Listar por marca: 3\n");
        printf("Para sair digite: 0\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                cadastrar(i);
                break;
            case 2:
                printf("Informe a faixa de preco: ");
                scanf("%f", &faixaPreco);
                listarPreco(faixaPreco, i);
                break;
            case 3:
                scanf("%c", &marca);
                listarMarca(marca, i);
                break;
        }
    }while (opcao != 0);

    return 0;
}
void cadastrar(int i){
    printf("Informe a marca");
    scanf("%c", &vetcarros[i].marca);
    printf("Informe o ano");
    scanf("%d", &vetcarros[i].ano);
    printf("Informe a cor");
    scanf("c", &vetcarros[i].cor);
    Preco("Informe o preco");
    scanf("%f", &vetcarros[i].preco);
}

void listarPreco(float fp, int i){
    if (vetcarros[i].preco <= fp){
        printf("%.2f", vetcarros[i].preco);
    }
}

void listarMarca(char m, int i){
    if (vetcarros[i].marca == m){
        printf("%c", vetcarros[i].marca);
    }
}

//scanf(" %59[^\n]")
