#include<stdio.h>
//int main()
//{
//	int a = 10,*p,**q;
//	p = & a;
//	q = & p;
//	
//	printf("%d\n",a);
//	printf("%d\n",&a);
//	printf("%d\n",p);
//	printf("%d\n",*p);
//	printf("%d\n",q);
//	printf("%d\n",*q);
//	printf("%d\n",**q);
	
	
	
	//  %u ----> use for the display  the address of value.
//	int num = 10;
//	printf("value of number is %d\n",num);
//	printf("address of number is %u",&num);




//	NULL Pointer

//	int*ptr = NULL;
//	if(ptr != NULL)
//	{
//		printf("value of ptr is :%d",ptr);
//	}
//	else
//	{
//		printf("NULL Pointer");
//	}



//	int a = 10;
//	int *q =&a;
//	printf("%d\n",a);
//	printf("%p\n",a);
//	printf("%p\n",*q);
//	printf("%p\n",q);
//	printf("%d\n",&q);
//	printf("%d",&a);



// pointer Arithmetic

//	int a = 10,b = 20,c;
//	int *p,*q;
//	p = &a;
//	q = &b;
//	
//	c = *p + *q;
//	
//	printf("Addition :%d",c);







	//sizeof operator
	
	
	
//	int a = 10;
//	printf("%d",sizeof(a));
	
	//sizeof(int);
	//sizeof(float);
	//sizeof(char);
	
	
	
	
	
	//function pointer
	
	
	
	int add(int a,int b)
	{
		int c;
		c = a + b;
		return c;
	}
	
	int main()
	{
	
	int a,b;
	int (*p)(int,int);
	
	int result;
	printf("Enter a :");
	scanf("%d",&a);
	
	printf("Enter b :");
	scanf("%d",&b);
	
	p = add;
	result = (*p)(a,b);
	printf("Addition :%d",result);
	return 0;
}

	
	
	
	

	
	
	
	
