//#include<stdio.h>
//
//void palindrome(int num){
//	int temp = num,rev = 0,rem;
//	while(num>0){
//	rem = num%10;
//	
//	num = num/10;
//	rev = rev*10+rem;
//}
//if (temp == rev)
//{
//	printf(" this is palindrome");
//}
//else{
//	printf(" this is not palindrome");
//}
//
//	
//int main(){                               //PALINDROME CODE
//	int(a);
//	printf("enter a number");
//	scanf("%d",&a);
//	palindrome(a);
//	
//	
//	return 0;
//}




//IN STATIC VARIABLE MEMORY ALLOCATE ONCE AND INCREMNET VALUE

//#include<stdio.h>
//
//void display()
//{
//	int a = 10; //LOCAL VARIABLE
//	static b =20;//STATIC VARIABLE
//	
//	a = a+1;
//	b = b + 2;                 //INCREMENT
//	
//	printf("%d",a);
//	printf(" %d\n",b);
//}
//int main()
//{
//	
//	display();
//	display();
//	display();   //FUNCTION CALLING
//	display();
//
//	return 0;
//}



//#include<stdio.h>                    //call by value - copy of variable ,no modified
//
//void show(int num){   //formal paremeter
//	printf("\nBefore adding = %d",num);
//	num = num+10;
//	printf("\nAfter adding = %d",num);
//}
//int main()
//{
//	int a = 10;
//	printf("\nBefore function calling %d",a);
//	show(a);                 //actual parameter
//	printf("\nAfter function calling %d",a);
//	
//	return 0;
//}
                           //Call by Value = Copy ? Original does not change.
                    //Call by Reference = Address (or key) ? Original can change.using pointer


//#include<stdio.h>
//void show (int *num){
//	printf("\nBefore adding = %d",*num);
//	(*num) = *num + 10;
//	printf("\nAfter adding = %d",*num);
//}
//int main()                    //call by  reference - modified a variable
//{
//	int a = 10;
//	printf("\nBefore function call a = %d",a);
//	show(&a);
//	printf("\nAfter function call a = %d",a);
//	return 0;
//}



#include<stdio.h>
int main()
{
	
	return 0;
}

