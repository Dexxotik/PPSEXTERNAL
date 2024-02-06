#include <stdio.h>

void main() {
    int rows,cols; // Starting number

    for (rows=4; rows >= 1; rows--) {
        for (cols = rows; cols >= 1; cols--) {
            printf("%d", cols);
        }
        printf("\n");
    }
}