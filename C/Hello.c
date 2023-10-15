
#include <stdio.h>

int main(void)
{
    char answer[255];
    printf("What's your name?\n");
    fgets(answer, sizeof(answer), stdin);
    
    printf("Hello %s", answer);
    return 0;
}