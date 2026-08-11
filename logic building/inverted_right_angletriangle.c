//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for(i = 1; i <= 4; i++)
//    {
//        if(i == 4)
//        {
//            for(j = 1; j <= 2; j++)
//            {
//                printf("%d", i);
//            }
//        }
//        else
//        {
//            for(j = 4; j >= i; j--)
//            {
//                printf("%d", i);
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}






//#include <stdio.h>
//
//int main()
//{
//    int r,s,c;
//
//    for(r = 5;r>0;r--)
//    {
//       
//     for(s= 0; s<5- r;s++)
//        {
//            printf(" ");
//        }
//        for(c= 1; c<= r;c++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}





     //full diamand
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<5; i++)
    {
        for(j =1;j<5 -i;j++)
        {
            printf(" ");
        }        
        for(k =1;k<=2* i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i =4;i>0;i--)
    {
       
        for(j =1;j<= 4-i;j++)
        {
            printf(" ");
        }
        for(k=1;k <=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}






















