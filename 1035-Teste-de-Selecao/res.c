#include <stdio.h>

int main() {
    
    int a=0,b=0,c=0,d=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    int somaCD = c+d;
    int somaAB = a+b;
    if (b>c && d>a) {
        if(somaCD>somaAB) {
            if (c > 0 && d > 0) {
                if ( (a%2) == 0 ) {
                    printf("Valores aceitos\n");
                    return 0;
                }
            }
        }
    }
    
    printf("Valores nao aceitos\n");
    return 0;
}
