#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 4; i++)
    {
        if(i == 4)
        {
            for(j = 0; j <2; j++)
            {
                printf("%d", i);
            }
        }
        else
        {
            for(j = 4; j >= i; j--)
            {
                printf("%d", i);
            }
        }

        printf("\n");
    }

    return 0;
}
