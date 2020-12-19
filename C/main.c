#include <stdio.h>

void tempConversion(int lower, int upper, int step) {
    float fahr, celsius;

    fahr = lower;

    while (fahr <= upper) {
        // C = (5/9)*(F-32)
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        
        printf("%3.0f %6.1f\n", fahr, celsius);

        fahr = fahr + step;
    }
}

int main() {
    tempConversion(0, 300, 20);
}