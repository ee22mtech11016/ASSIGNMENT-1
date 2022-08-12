#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i;
    double n, arrayrandom[1000000],sum=0, mean;
    srand((unsigned)time(NULL));            
    for(i = 0; i < 1000000; i++) 
    {                //1000000 random numbers
        arrayrandom[i] = (double)rand() / RAND_MAX;      // in the range 0 ... 1
        printf("%f\n", arrayrandom[i]);                   
    }
    for(i=0;i<1000000; i++)
    {
    	sum=sum+arrayrandom[i];
    }
    mean=sum/1000000;
    printf("mean = %f", mean);
    return 0;
}
