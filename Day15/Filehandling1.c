#include<stdio.h>
int main()
{
//	FILE*fp;
//	fp = fopen("prathamesh11.txt","w");         //use fputc() -->only single character put in file
//	fputc('a',fp);
//	fclose(fp);


//FILE*fp;
//char c;
//fp = fopen("prathamesh11.txt","r");   //use fgetc()-->that single character get with help  of getc
//while((c = fgetc(fp)) != EOF)
//{
//	printf("%c",c);
//}
//fclose(fp);



//FILE*fp;                     //fputs for multiple line 
//fp = fopen("myfile.txt","w");
//fputs("hello c programming",fp);
//fclose(fp);



//FILE*fp;
//char text[300];              //gets insted of scanf and get multiple line
//
//fp = fopen("myfile.txt","r");
//printf("%s",fgets(text,200,fp));
//fclose(fp);





//FILE*fp;                     //fseek()
//fp = fopen("myfile.txt","w+");  //w+ use for read and write file
//fputs("C programming",fp);
//
//fseek(fp,7,SEEK_SET);// 7 number chya index vrti practical content add hoil
//fputs("practical",fp);
//fclose(fp);
////output--> C progrpractial





//	FILE*fp;
//	char name [200];
//	fp = fopen("myfile.txt","r");       //frewind()  
//	
//	while (fgets(name,100, fp)!= NULL)
//	{
//		printf("%s\n",name);
//	}
//	rewind(fp);
//	
//	while (fgets(name,100, fp)!= NULL)
//	{
//		printf("%s\n",name);
//	}
//	rewind(fp);
//	
//	while (fgets(name,100, fp)!= NULL)
//	{
//		printf("%s",name);
//	}
	
	
	
	
//	FILE*fp;
//	char name;
//	fp = fopen("myfile.txt","r");
//	
//	while ((name = fgetc(fp))!= EOF)
//	{
//		printf("%c",name);
//	}
//	rewind(fp);
//	
//	while ((name = fgetc(fp))!= EOF)
//	{
//		printf("%c",name);
//	}
//	rewind(fp);
//	
//while ((name = fgetc(fp))!= EOF)
//	{
//		printf("%c",name);
//	}




//ftell


FILE*fp;
int length;
fp = fopen("myfile.txt","r");
fseek(fp,0,SEEK_END);

length = ftell(fp);
fclose(fp);
printf("size of file :%d bytes",length);
	
return 0;	
	
	

}
