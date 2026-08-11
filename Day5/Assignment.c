#include<stdio.h>
int main()
{                           //find the square of any number
	int i,n,square = 0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		square = square + n;

		
	}
	printf("The square of %d: %d\n",n,square);
	return 0;

}
