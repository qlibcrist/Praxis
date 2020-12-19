#include "temperature/temp.c"
#include "inputOutput/charInput.c"
#include <stdio.h>

// Constants -----------------------------------------------------------------------------------------------------------

#define LOWER 0
#define UPPER 300
#define STEP 20

// Main ----------------------------------------------------------------------------------------------------------------

int main() {
    printf("Temperature conversion from 0 to 300 degress F.\n");
    tempConversion(LOWER, UPPER, STEP);

    printf("Character input and output.\n");
    int c = charInput();
}