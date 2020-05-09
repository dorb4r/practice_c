#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 5)
    {
        if (i < 2) {
            printf("Dor ");
        }
        else if (i > 2) {
            printf("Bar ");
        }
        else {
            printf("Middel! ");
        }
        i++;
    }
    printf("\n");
}