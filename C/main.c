#include "temperature/temp.c"
#include <stdio.h>

// Constants -----------------------------------------------------------------------------------------------------------

#define LOWER 0
#define UPPER 300
#define STEP 20

// Main ----------------------------------------------------------------------------------------------------------------

int main() {
    tempConversion(LOWER, UPPER, STEP);
}