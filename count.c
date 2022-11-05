#include <stdio.h>

int main() {
    // printf() displays the string inside quotation
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nCounting....\n");

    for (int i = 1; i < N + 1; i++){
        printf("%d\n", i);
    }
   
   return 0;
}
