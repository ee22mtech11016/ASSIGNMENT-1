#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;
    double n;
    srand((unsigned)time(NULL));            
    for(i = 0; i < 1000000; i++) {                //1000000 random numbers
        n = (double)rand() / RAND_MAX;      // in the range 0 ... 1
        printf("%f\n", n);                  
    }
    return 0;
}
