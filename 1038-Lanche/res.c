#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a,&b);

    double valor = 0;
    if (a == 1) {
        valor = 4.00 * b;
    } else if (a == 2) {
        valor = 4.50 * b;
    } else if (a == 3) {
        valor = 5.00 * b;
    } else if (a == 4) {
        valor = 2.00 * b;
    } else {
        valor = 1.50 * b;
    }

    printf("Total: R$ %.02lf\n", valor);

    return 0;
}
