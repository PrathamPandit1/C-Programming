#include<stdio.h>
#include<string.h>
//struct employee
//{
//	int id;
//	char name[20];
//}e1;
//int main()
//{
//	e1.id = 101;
//	strcpy(e1.name,"Prathamesh");
//	
//	printf("\nid = %d",e1.id);
//	printf("\nname = %s",e1.name);
//	return 0;
//}



	struct student
	{
		int id;
		char name[10];
	};
	int main()
	{
		struct student s[5];
		int i;
		
		for(i = 0;i<5;i++)
		{
			printf("\n Enter id =");
			scanf("%d",&s[i].id);
			
			printf("\n Enter name =");
			scanf("%s",&s[i].name);
		}
		printf("\nStudent information\n");    //multiple data store
		for(i = 0;i<5;i++)
		{
			printf("\nid:%d,name:%s",s[i].id,s[i].name);
		}
		return 0;
	}
