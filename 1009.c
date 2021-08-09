#include <stdlib.h>
#include <stdio.h>

int main(void){
    double salary, total_sales, bonus;
    char name;
    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&total_sales);
    bonus = total_sales * 15/100;
    printf("TOTAL = R$ %.2lf\n",(salary+bonus));
    return 0;
}
