#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int i;
    int j= 0;
    char nomeProduto[999][200];
    int quantidade[200];
    float valorProduto[200];

    do
    {
        printf("1  -  Adicionar venda\n");
        printf("2  -  Exibir total de vendas\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        fflush(stdin);

        switch (opcao)
        {
        case 1:

            printf("Nome do produto: ");
            gets(nomeProduto[j]);

            fflush(stdin);

            printf("Valor do produto: ");
            scanf("%f", &valorProduto[j]);

            printf("Quantidade do produto: ");
            scanf("%d", &quantidade[j]);

            j++;
            break;
        case 2:

            for (i = 0; i < j; i++)
            {

                printf("%dº vendas.\n", i + 1);
                printf("Produtos: %s\n", nomeProduto[i]);
                printf("Valor dos produtos: %.2f\n", valorProduto[i]);
                printf("Quantidade: %d\n", quantidade[i]);
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 2);

return 0;
}