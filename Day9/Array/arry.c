//#include<stdio.h>
//int main ()
//{
//	int i;
//	int arr[] = {10,20,30,23,22,11,234};
//    int search,found =0;
//	int size = sizeof (arr)/sizeof (arr[0]);
//	
//	printf("Enter a number :");
//	scanf("%d",&search);
//	for(i=0;i<size;i++)
//	{
//		
//		if (arr[i]== search){
//			found = 1;
//			break;
//		}
//	}
//		if(found == 1){
//			printf("Element has been found");
//			
//		
//		}
//		else{
//			printf("Element is not found");
//		}
//	//	printf(" %d",arr[6]);           --->index of the array and get the value
////		printf(" %d",arr[i]);
//		
//	
//	return 0;
//}










////maximum element of array
//
//
////#include <stdio.h>
////
////int main()
////{
////    int arr[100], n, i, max;
////
////    printf("Enter the size of array: ");
////    scanf("%d", &n);
////
////    printf("Enter %d elements:\n", n);
////    for(i = 0; i < n; i++)
////    {
////        scanf("%d", &arr[i]);
////    }
////
////    max = arr[0];
////
////    for(i = 1; i < n; i++)
////    {
////        if(arr[i] > max)
////        {
////            max = arr[i];
////        }
////    }
////
////    printf("Maximum element = %d", max);
////
////    return 0;
////}







//minimum element of array




//#include <stdio.h>
//
//int main()
//{
//    int arr[100], n, i, min;
//
//    printf("Enter the size of array: ");
//    scanf("%d", &n);
//
//    printf("Enter %d elements:\n", n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    min = arr[0];
//
//    for(i = 1; i < n; i++)
//    {
//        if(arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//
//    printf("Minimum element = %d", min);
//
//    return 0;
//}



//
////insert an element
//#include <stdio.h>
//
//int main()
//{
//    int arr[100], n, i, pos, value;
//
//    printf("Enter the size of array: ");
//    scanf("%d", &n);
//
//    printf("Enter %d elements:\n", n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("Enter position (1 to %d): ", n + 1);
//    scanf("%d", &pos);
//
//    printf("Enter value to insert: ");
//    scanf("%d", &value);
//
//    for(i = n; i >= pos; i--)
//    {
//        arr[i] = arr[i - 1];
//    }
//
//    arr[pos - 1] = value;
//    n++;
//
//    printf("Array after insertion:\n");
//    for(i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}














//Array is collectonn of element of the store the elements in contignous memory location

//multiple elemnts can store in a single variable
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	int arr[6] = {2,1,4,6,4,3};
//	for(i = 0;i<7;i++)
//	{
//		printf(" %d",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//     int i;
//	float arr[6] = {2.4,1.3,4.0,6.54,4.3,3.4};
//	float size = sizeof (arr)/sizeof(arr[0]);
//	for(i = 0;i<size;i++)
//	{
//		printf(" %f",arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	char arr[4] = {'a','c','e','e'};
//	for(i = 0;i<7;i++)
//	{
//		printf(" %c",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	double arr[3] = {267.3,45.845,987.3};
//	for(i = 0;i<7;i++)
//	{
//		printf(" %f",arr[i]);
//	}
//	return 0;
//}



//2d aray
//#include<stdio.h>
//int main()
//{
//	int arr[2][2] = {{10,20},{30,40}};
//	int i,j;
//	for(i = 0;i<2;i++){
//	  printf("\n");
//		for(j=0;j<2;j++){
//			printf(" %d",arr[i][j]);
//		}
//	}
//	return 0;
//}



//int main()
//{
//    int i;
//    int arr[6];
//
//    printf("Enter 6 numbers:\n");
//
//    for (i = 0; i < 6; i++)                              //1d array sum
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("The entered numbers are:\n");
//
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//
//
//
//
//
//int i,j,sum = 0;
//int arr[5][5] = {{1,2,3,4,5},{2,4,3,3,2}};
// 
// for(i=0;i<5;i++){
// 	for(j = 0;j<5;j++){
// 		sum = sum+arr[i][j];                          //in 2d array sum
//	 }
// 	
// }
// printf(" sum of all elements is :%d",sum);
//
//    return 0;
//}





//maximum element of array


#include <stdio.h>

int main()
{
    int arr[100], n, i, max;
  printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
   }

   max = arr[0];

   for(i=1; i<n; i++)
   {
           if(arr[i] > max)
       {
           max= arr[i];
      }
    }

    printf("Max element = %d", max);

   return 0;
}














