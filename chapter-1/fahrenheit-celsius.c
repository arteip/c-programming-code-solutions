#include <stdio.h>

// Print F to C table for fahr = 0, 20, ..., 300

#define STEP 20
#define LOWER 0
#define UPPER 300

float calculateFahr(float fahr);

int main () {
    int i;
    
    for (i=UPPER; i>=LOWER; i=i-STEP) {
        printf("%d %6.1f\n", i, calculateFahr(i));
    }
}

float calculateFahr(float n) {
    n = (5.0/9.0)*(n-32);
    return n;
}
