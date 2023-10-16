
#include <stdio.h>

int main(void)
{
    char first[255];
    char last[255];
    printf("What's your first name?\n");
    fgets(first, sizeof(first), stdin);
    printf("What is your last name?\n");
    fgets(last, sizeof(last), stdin);

    printf("Hello, %s%s", first, last);
    return 0;
}