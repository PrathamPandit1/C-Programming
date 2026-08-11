#include<stdio.h>
int main()
{
//    FILE *fp;
//
//    fp = fopen("Prathamesh.txt","w");
//
//    fprintf(fp,"good morning");             //modde w
//
//    fclose(fp);
    
    
    
//    FILE*fp;
//    char buff[255];//creating char array to store data of file
//    fp = fopen("prathamesh.txt","r");
//    
//    while(fscanf(fp,"%s",buff)!=EOF)               //mode r
//    {
//    	printf("%s ",buff);
//	}
//	fclose(fp);




//    FILE *fp;
//    char name[50], city[50];
//
//    fp = fopen("Prathamesh.txt","w");
//    
//    printf("Enter your name: ");
//    scanf("%s", name);
//
//    printf("Enter your city: ");
//    scanf("%s", city);
//
//    fprintf(fp, "hello i am %s", name);
//    fprintf(fp, " and i am from %s", city);
//
//    fclose(fp);
//
//    printf("Data saved successfully.");
    
    
    
    FILE*fp;
    
    fp = fopen("prathamesh.txt","a");
    

    fprintf(fp,"\nHello good morning everyone!!!!");
    fclose(fp);

    return 0;
}
	
      
