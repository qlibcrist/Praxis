#include <stdio.h>

// Functions -----------------------------------------------------------------------------------------------------------

void tempConversion(int lower, int upper, int step) {
    float fahr;

    for (fahr = lower; fahr <= upper; fahr = fahr + step) {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}