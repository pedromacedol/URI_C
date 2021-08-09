#include <stdlib.h>
#include <stdio.h>

int main(void){
    int code_a, code_b, units_a, units_b;
    double price_a, product_a, price_b, product_b, total;
    scanf("%d %d %lf",&code_a,&units_a,&price_a);
    scanf("%d %d %lf",&code_b,&units_b,&price_b);
    total =  (units_a*price_a) + (units_b * price_b);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
