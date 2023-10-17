#include <stdio.h>
int get_size(int n) 
{
    
    do
    {
        printf("Input a number\n");
        n = scanf("%d", &n);
    } while (n < 1);
    
    return n;
}

int main(void)
{
    get_size(0);
}

