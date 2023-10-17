#include <stdio.h>

int main(void)
{
    const int dimension = 3;
    for (int i = 0; i < dimension; i++) 
    {
        for (int j = 0; j < dimension; j++) 
        {
            printf("#");
        }
        printf("\n");
    }
    

    return 0;
}