#include<stdio.h>
int main()
{
//	int i,j;
//for(i = 0;i<4;i++)
//{
//	for(j = 0;j<4;j++)       //4545 pattern
//	{
//		if(j%2==0)
//		{
//			printf("4");
//		}
//		else{
//			printf("5");
//		}
//		
//	}
//	printf("\n");
//	}





//	int i,j;
//for(i = 0;i<5;i++)
//{
//	for(j = 0;j<5;j++)
//	{
//		if(i==0||i==4||j==0||j==4)     //pattern
//		{
//			printf("*");
//		}
//		else{
//			printf(" ");
//		}
//		
//	}
//	printf("\n");
//	}





//
//	int i,j;
//for(i = 0;i<5;i++)
//{
//	for(j = 0;j<5;j++)
//	{
//		if(i==0||i==4||j==0||j==4)     //pattern
//		{
//			printf("*");
//		}
//		else{
//			printf(" ");
//		}
//		
//	}
//	printf("\n");
//	}










	int i,j;
for(i = 0;i<5;i++)
{
	for(j = 0;j<5;j++)
	{
		 if(i==0||i==4||j==0||j==4)
		{
			if(i%2==0)
			{
				printf("1");
			}
			else{
				printf("0");
			}
			
		}
		
		else{
			printf(" ");
		}
		
	}
	printf("\n");
	}
	
	return 0;
}
