#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

//    printf("Enter a string: ");
//    fgets(str,sizeof(str),stdin);
//
//    while (str[i] != '\0') {
//        if (str[i] >= 'a' && str[i] <='z') {      //CONVERT INTO THE UPPERCASE
//            str[i] = str[i] - 32;
//        }
//        i++;
//    }
//
//    printf("Uppercase String: %s", str);
    
    
  printf("enter a string :");
  fgets(str,sizeof(str),stdin);
   
  while(str[i] !='\0')
   {
   	if(str[i]>='A' && str[i]<='Z')
   	{
   		str[i]= str[i] + 32;
	   }
   	i++;
   }
   printf("lowercase :%s",str);   //CONVERT INTO THE LOWERCASE
	

    return 0;
}
