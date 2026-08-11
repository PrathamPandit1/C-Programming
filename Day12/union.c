//UNION
//store diff datatype in same memory location
#include<stdio.h>
#include<string.h>
union employee
{
	int id;
	char name[20];
	
}e1;

void main()
{
	e1.id = 101;
	strcpy(e1.name,"prathamesh");
	
	
	printf("id = %d\n",e1.id);
	printf("name = %s",e1.name);
}
