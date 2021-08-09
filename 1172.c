#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int lista[10], i, j;
    for(i=0;i<10;i++)
    {
        scanf("%d", &lista[i]);
    }
    for(j=0;j<10;j++) 
    {
        if(lista[j] <= 0)
        {
          lista[j] = 1;
        }
        printf("X[%d] = %d\n",j,lista[j]);  
    }    
    
    return 0;  
}
