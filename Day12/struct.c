#include<stdio.h>

//	char str[100];
//	int i = 0;
//	
//	printf("Enter a string :");
//	fgets(str,sizeof(str),stdin);
//	
//	while(str[i] != '\0')
//	{
//		if(str[i]>='A' && str[i]<='Z')   //CONVERT INTO THE LOWER CASE
//		{
//			str[i]  =str[i] + 32;
//		}
//		i++;
//	}
//	printf("Lowercase :%s",str);





// REAL LIFE EXAMPLE OF USERNAME OR PASSWORD IS CORRECT OR NOT
//	char username[50];
//	char password[60];
//	printf("Enter a username :");
//	scanf("%s",&username);
//	
//	printf("Enter a password:");
//	scanf("%s",&password);
//	
//	if(strcmp(username,"admin")==0 && strcmp(password,"admin123")==0)
//	{
//		printf("\n login successed!!!");
//	}
//	else{
//		printf("\n login failed!!!");
//	}




	
	
struct employee
{
	int id;
	char name[20];
}e1;
int main()
{
	e1.id = 101;
	strcmp(e1.name,"abc");
	
	printf("\nid = %d",e1.id);
	printf("\n name = %s",e1.name);
	return 0;
}

