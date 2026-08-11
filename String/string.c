#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char name[20],t;
	puts("enter a string :");
	gets(name);
	l = strlen(name);
	
	for(i = 0;i<l/2;i++)
	{
        t =	name[i];
		name[i] = name[l-1-i];
		name[l-1-i]= t;
	}
	printf("%s",name);
}
