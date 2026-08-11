//#include<stdio.h>
//
//	int main()
//	{
//		int num,temp,rev = 0,rem;
//		printf("enter a number :");         //palindrome of number
//		scanf("%d",&num);
//		temp = num;
//		while(num>0)
//		{
//			rem = num%10;
//			rev = rev*10+rem;
//			num = num/10;
//		}
//		if( temp == rev)
//		{
//			printf("%dyes palindrome",temp);
//		}
//		else{
//			printf("no palindrome");
//		}
//	}
//	










//#include<stdio.h>
//
//	int main()
//	{
//		int num,rev = 0,rem;
//		printf("enter a number :");         //reverse the number
//		scanf("%d",&num);
//	
//		while(num>0)
//		{
//			rem = num%10;
//			rev = rev*10+rem;
//			num = num/10;
//		}
//		printf("%d reverse",rev);
//		
//	return 0;
//	
//	}






//#include<stdio.h>
//
//	int main()
//	{                                       //using for loop
//		int n,i,sum = 0;
//		printf("enter a number :");         //addition of natural  number
//		scanf("%d",&n);
//	
//	for(i = 1;i<=n;i++)
//		{
//			sum = sum +i;
//		}
//		printf("Addition %d is %d",n,sum);
//		
//	return 0;
//	
//	}









//	int n,i,sum = 0;
//	
//	printf("enter a number :");                     
//	scanf("%d",&n);
//	
//	
//	for(i=1;i<=n;i++)
//	{
//		sum = sum+i;
//	}
//	printf("addition %d is %d",num,n);





// int n,i = 1,sum = 0;
//printf("enter a number :");                    //using while loop
//scanf("%d",&n);
//
//while(n>=i)
//{
//	sum = sum+i;
//	i++;
//}
//printf("%d sum is %d",n,sum);
//}




	
//#include<stdio.h>
//	struct student
//	{
//		int id;
//		char name[10];
//		float marks;
//	};
//	int main()
//	{
//		struct student s[3];
//		int i;
//		
//		for(i = 0;i<3;i++)
//		{
//			printf("\n Enter id =");
//			scanf("%d",&s[i].id);
//			
//			printf("\n Enter name =");
//			scanf("%s",s[i].name);
//			
//			printf("\n Enter a marks =");
//			scanf("%f",&s[i].marks);
//		}
//		printf("\nStudent information\n");    //multiple data store
//		for(i = 0;i<3;i++)
//		{
//			printf("\nid:%d,name:%s,marks:%d",s[i].id,s[i].name,s[i].marks);
//		}
//		return 0;
//	}









#include<stdio.h>
	union student
	{
		int id;
		char name[10];
	
	};
	int main()
	{
		union student s[3];
		int i;
		
		for(i = 0;i<3;i++)
		{
			printf("\n Enter id =");
			scanf("%d",&s[i].id);
			
			printf("\n Enter name =");
			scanf("%s",s[i].name);
			
			
		}
		printf("\nStudent information\n");    //multiple data store
		for(i = 0;i<3;i++)
		{
			printf("\nid:%d,name:%s,",s[i].id,s[i].name);
		}
		return 0;
	}		


