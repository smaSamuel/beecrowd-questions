#include <stdio.h>

int main () {
    double dinheiro = 0.00f;
    scanf("%lf", &dinheiro);

    int num = 0;
    printf("NOTAS\n");
    num = dinheiro / 100.00f;
    dinheiro -= (100.00f * num);
    printf("%d nota(s) de R$ 100.00\n", num);

    num = dinheiro / 50.00f;
    dinheiro -= (50.00f * num);
    printf("%d nota(s) de R$ 50.00\n", num);
    
    num = dinheiro / 20.00f;
    dinheiro -= (20.00f * num);
    printf("%d nota(s) de R$ 20.00\n", num);

    num = dinheiro / 10.00f;
    dinheiro -= (10.00f * num);
    printf("%d nota(s) de R$ 10.00\n", num);

    num = dinheiro / 5.00f;
    dinheiro -= (5.00f * num);
    printf("%d nota(s) de R$ 5.00\n", num);

    num = dinheiro / 2.00f;
    dinheiro -= (2.00f * num);
    printf("%d nota(s) de R$ 2.00\n", num);

    printf("MOEDAS:\n");

    num = dinheiro / 1.00f;
    dinheiro -= (1.00f * num);
    printf("%d moeda(s) de R$ 1.00\n", num);

    num = dinheiro / 0.50f;
    dinheiro -= (0.50f * num);
    printf("%d moeda(s) de R$ 0.50\n", num);
    
    num = dinheiro / 0.25f;
    dinheiro -= (0.25f * num);
    printf("%d moeda(s) de R$ 0.25\n", num);

    num = dinheiro / 0.10f;
    dinheiro -= (0.10f * num);
    printf("%d moeda(s) de R$ 0.10\n", num);

    num = dinheiro / 0.05f;
    dinheiro -= (0.05f * num);
    printf("%d moeda(s) de R$ 0.05\n", num);
    
    printf("%0.0f moeda(s) de R$ 0.01\n", dinheiro / 0.01f);


    return 0;
}
