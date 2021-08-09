#include <stdlib.h>
#include <stdio.h>

int main(void){
    int number,hour;
    float salary_hour, salary;
    scanf("%d",&number);
    scanf("%d",&hour);
    scanf("%f",&salary_hour);
    salary = salary_hour * hour;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,salary);
    return 0;
}
