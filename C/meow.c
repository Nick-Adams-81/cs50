#include <stdio.h>

int main(void)
{
    int counter = 5;
    while (counter > 0)
    {
        printf("meow\n");
        counter--;
    }
    
    int i = 0;
    while (i < 3)
    {
        printf("woof\n");
        i++;
    }

    for(int i = 0; i < 3; i++)
    {
        printf("hello\n");
    }
    return 0;
}