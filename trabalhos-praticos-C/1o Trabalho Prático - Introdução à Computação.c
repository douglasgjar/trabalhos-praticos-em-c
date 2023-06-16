#include <stdio.h>

int main ()
{
    float rendimentos_tribut, val_previdencia, val_pensao, outras_ded, imposto_renda;
    int num_dependentes;

    printf ("Informe o valor de seus rendimentos tributaveis:\n");
    scanf ("%f",&rendimentos_tribut);
    printf ("Informe o valor de sua previdencia:\n");
    scanf ("%f",&val_previdencia);
    printf ("Informe o numero de dependentes:\n");
    scanf ("%d",&num_dependentes);
    printf ("Informe o valor da pensao alimenticia:\n");
    scanf ("%f",&val_pensao);
    printf ("Informe o valor de outras deduçoes:\n");
    scanf ("%f",&outras_ded);

    imposto_renda = (rendimentos_tribut - val_previdencia - num_dependentes * 189.59 - val_pensao - outras_ded);

    if (imposto_renda <= 1903.98)
    {
        imposto_renda = imposto_renda
        printf ("Base de calculo - 1o Faixa: Ate' 1.903,98\n");
        printf ("Valor do IR: R$%.2d\n",imposto_renda);
        printf ("Percentual da aliquota do IR: 0% (Isento)");
    }
    else
    {
        if (imposto_renda >= 1903.99 && <= 2826.65)
        {
            imposto_renda = imposto_renda + (imposto_renda * 0.075);
            printf ("Base de calculo - 2o Faixa: De 1.903,99 ate' 2.826,65\n");
            printf ("Valor do IR: R$%.2d\n",imposto_renda);
            printf ("Percentual da aliquota do IR: 7,5%");
        }
        else
        {
            if (imposto_renda >= 2826.66 && <=3751.05)
            {
                imposto_renda = imposto_renda + (imposto_renda * 0.15);
                printf ("Base de calculo - 3o Faixa: De 2.826,66 ate' 3.751,05\n");
                printf ("Valor do IR: R$%.2d\n",imposto_renda);
                printf ("Percentual da aliquota do IR: 15%");
            }
            else
            {
                if (imposto_renda >= 3751.06 && <= 4664.68)
                {
                    imposto_renda = imposto_renda + (imposto_renda * 0.225);
                    printf ("Base de calculo - 4o Faixa: De 3.751,06 ate' 4.664,68\n");
                    printf ("Valor do IR: R$%.2d\n",imposto_renda);
                    printf ("Percentual da aliquota do IR: 22,5%");
                }
                else
                {
                    if (imposto_renda >= 4664.69)
                    {
                        imposto_renda = imposto_renda + (imposto_renda * 0.275);
                        printf ("Base de calculo - 5o Faixa: Acima de 4.664,68\n");
                        printf ("Valor do IR: R$%.2d\n",imposto_renda);
                        printf ("Percentual da aliquota do IR: 27,5%");
                    }
                }
            }
        }
    }

    return 0;
}
