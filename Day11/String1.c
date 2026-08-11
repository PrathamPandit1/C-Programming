#include<stdio.h>
#include<String.h>
int main()
{
//	char str[50];
//	printf("enter a character :");
//	scanf("%s",&str);
//	
//	printf("String = %s",str);
	
	
//	char str[50];
//	printf("Enter a string :");
//	gets(str);
//	puts(str);                         //get input and see output
	
	
	
//	char name[30];
//	printf("enter a name :");
//	gets(name);                          //convert into  the upper case
//	strupr(name);
//	puts(name);


/*char name[30] = {"hello,good morning!!!"};

//printf("upper case :%s\n",strupr(name));



char name1[40] = {"HELLO ,GOOD MORNING!!!"};	
//printf("lowercase :%s\n",strlwr(name1));

strcmp(name,name1);
printf("%d\n",strcmp(name,name1));

if(strcmp(name,name1) == 0){
	
	printf(" Both string are equal");
}
else{
	printf("string are not same");
}*/







//char name[40];
//printf("enter a name :");
//gets(name1);
//strlwr(name1);
//puts(name1);
//
//
//	char str1[20] = "prathamesh";
//	char str2[20] = "pratham";
//	printf("Length is %d\n",strlen(str1));//use strlen function
//	
//	strcpy(str1,str2);
//	printf("%s\n",str2);//strcpy function
//	
//	strcat(str2," hello!!");//strcat function
//	printf("%s",str2);





//char str[100];
//int i = 0,count  =0;
//printf("Enter a Alphabet\n:");
//gets(str);
//
//while(str[i] !=='\0'){
//	if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'
//	||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
//	
//	count++;
//}
//	i++;
//}
//	printf("number of vowels in string %d",count);


//char ch;
//printf("Enter a character :");
//scanf("%c",&ch);
//
//if(ch>='65' && ch<'122')
//{
//	printf("%c This alphabet is lowercase ",ch);
//}
//else if(ch>='A' && ch<'Z')
//{
//	printf("%c This alphabet is uppercase",ch);
//}
//else if(ch>='0' && ch<'9')
//{
//	printf("%c is a digit ",ch);
//}
//else{
//	printf("%c this is a special character",ch);
//}





char ch;
printf("Enter a character :");
scanf("%c",&ch);

if(ch>=97 && ch<123)
{
	printf("%c This alphabet is lowercase ",ch);
}
else if(ch>=65 && ch<91)
{                                               //using ascii value
	printf("%c This alphabet is uppercase",ch);
}
else if(ch>=48 && ch<58)
{
	printf("%c is a digit ",ch);
}
else{
	printf("%c this is a special character",ch);
}
	return 0;
}
