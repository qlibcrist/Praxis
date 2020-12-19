#include <stdio.h>

int charInput() {
    // Store character as integer to allow for a big enough bit-size.
    int c;

    while((c = getchar()) != EOF) {
        putchar(c);
    }

    return c;
}