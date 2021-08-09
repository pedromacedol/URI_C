#include <stdio.h>
 
int main(void) {

    double A, B, area;
    scanf("%lf",&A);
    scanf("%lf",&B);
    area = ((A*3.5)+(B*7.5))/11;
    printf("MEDIA = %.5lf\n",area);
    return 0;
}
