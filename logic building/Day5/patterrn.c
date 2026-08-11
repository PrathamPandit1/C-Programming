//#include <stdio.h>
//
//int main() {
//    
//    int i, j;
//
//    for (i = 0; i <5; i++) {
//        for (j = 0; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 0; i < 5; i++) {

     for (j = 0;j < 5-i; j++)
            printf(" ");

        for (k = 0; k <=i; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}



