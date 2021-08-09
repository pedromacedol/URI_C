#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){
    const float pi = 3.14159;
    double A, B, C, TRI, CIR, TRA, QUA, RET;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRI = (A*C)/2.0;
    CIR = pi * pow(C,2);
    TRA = (A+B)*C/2.0;
    QUA = pow(B,2);
    RET = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRI,CIR,TRA,QUA,RET);
    return 0;
}
