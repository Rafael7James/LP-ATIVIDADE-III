#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int numeros[5];
    int i, numerosImpares = 0, numerosNegativos = 0, maior, menor, somaPares = 0, somaTotal = 0, numerosPares = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0)
        {
            numerosImpares++;
        }

        if (numeros[i] < 0)
        {
            numerosNegativos++;
        }

        if (i == 0 || numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor)
        {
            menor = numeros[i];
        }

        if (numeros[i] % 2 == 0)
        {
            numerosPares++;
            somaPares += numeros[i];
        }

        somaTotal += numeros[i];
    }

    printf("\nQuantidade de n�meros �mpares: %d\n", numerosImpares);
    printf("Quantidade de n�meros negativos: %d\n", numerosNegativos);
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);

    if (numerosPares > 0)
    {
        printf("M�dia de n�meros pares: %.1f\n", (float)somaPares / numerosPares);
    }
    else
    {
        printf("Nenhum n�mero par inserido.\n");
    }

    printf("M�dia de todos os n�meros: %.1f\n", (float)somaTotal / 5);

    return 0;
}
