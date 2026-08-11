#include<stdio.h>

//SOLID square PATTTERN WITH character


int i,j;
int main()
{

//	for(i = 0;i<3;i++)
//{	
//		
//	for(j= 0;j<3;j++)
//	{
//		printf("p");
//	}
//	printf("\n");
//}










//   for(i = 1;i<=5;i++)
//   {
//   	for(j = 1;j<=i;j++)
//   	{
//   		printf("*");
//	   }
//	   printf("\n");
//   }



for(i = 0;i<5;i++)
{
	for(j = 0;j<5;j++)
	{
		if(i%2==0)
		{
			printf("1");
		}
		else{
			printf("0");
		}
	}
	printf("\n");
}
    
	return 0;
	
}
