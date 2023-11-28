#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int numeros[5];
    int i, numerosImpares = 0, numerosNegativos = 0, maior, menor, somaPares = 0, somaTotal = 0, numerosPares = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
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

    printf("\nQuantidade de números ímpares: %d\n", numerosImpares);
    printf("Quantidade de números negativos: %d\n", numerosNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    if (numerosPares > 0)
    {
        printf("Média de números pares: %.1f\n", (float)somaPares / numerosPares);
    }
    else
    {
        printf("Nenhum número par inserido.\n");
    }

    printf("Média de todos os números: %.1f\n", (float)somaTotal / 5);

    return 0;
}
