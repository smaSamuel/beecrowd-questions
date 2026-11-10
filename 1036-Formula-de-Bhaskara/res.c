#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);

    double delta,raizDelta;
    delta = (pow(b,2))-(4*a*c);
    raizDelta = sqrt(delta);

    if (a == 0 || delta < 0) {
        printf("Impossivel calcular\n");    
        return 0;
    }

    double r1,r2;
    r1 = (-(b) + raizDelta)/(2*a);
    r2 = (-(b) - raizDelta)/(2*a);
    
    printf("R1 = %1.5lf\n", r1);
    printf("R2 = %1.5lf\n", r2);
    return 0;
}   
