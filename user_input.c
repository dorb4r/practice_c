#include <stdio.h>

int main(void)
{
    char answer[100];
    printf("What is your name?\n");
    fgets(answer,20,stdin);
    printf("Hello, %s", answer);
}