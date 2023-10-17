#include <stdio.h>

int main(void) 
{
    int num;
    int num2;
    printf("enter a number\n");
    scanf("%d", &num);
    printf("enter another number\n");
    scanf("%d", &num2);
    if(num > num2) 
    {
        printf("num 1 is bigger than num 2\n");
    } 
    else if(num2 > num)
    {
        printf("num 2 is bigger than num 1\n");
    }
    else 
    {
        printf("both nums are equal\n");
    }
    
    return 0;
}