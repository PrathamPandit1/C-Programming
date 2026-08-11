#include <stdio.h>

int main() {
//    int i;
//    int Attendance[7] = {1, 0, 0, 1, 1, 1, 1};
//    int present = 0;
//    int Absent = 0;
//
//    for (i = 0; i < 7; i++) {
//        if (Attendance[i] == 1) {
//            printf("Day %d :Present\n", i + 1);
//            present++;      
//        } else {
//            printf("Day%d :Absent\n", i + 1);
//            Absent++;       
//        }
//    }
//
//    printf("\nTotal Present = %d\n", present);
//    printf("Total Absent = %d\n", Absent);




      
//      int i,sum = 0,mul = 1;
//      int arr[10] = {2,3,4,2,6,8,4,2,4,1};
//      
//      for (i = 0;i<10;i++)
//      {
//      	
//      	if(i%2==0){
//      		sum+=arr[i];
//		  }
//		  else{
//		  mul = mul*arr[i];
//		  }
//		  
//	  }
//	  printf("the sum is %d\n",sum);
//	  printf("the mul is %d",mul);





                                         //multidimensional array




int main()
{
    int num[2][3][2] = {
        {
            {0, 1},
            {2, 3},
            {4, 5}
        },
        {
            {6, 7},
            {8, 9},
            {10, 11}
        }
    };

    int i, j, k;

    for(i = 0; i < 2; i++)
    {
        printf("\n");

        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 2; k++)
            {
                printf("%d ", num[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}

