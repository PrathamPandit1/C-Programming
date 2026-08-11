//reusable code
//in function code can convert into the proper readble  format
//two types of function 1st is userdefine and 2nd is predefine function
//in predefine function -->printf()
//in userdefine function -->main()
//function is a block of code
#include<stdio.h>
/*
	void display();
	void main()                                 //NON PARAMETERISE / DEFAULT FUNCTION
	{
		display();//function callinng
		printf("\njage vaa\n");
		display();
		printf("\nuthale ka");
	}
		void display()//function definnation
	{
		//function body
		printf("Good morning everyone...");
	}
	*/
	
	
//	
//	int c;
//	void addition(int a,int b)
//	{
//		c = a + b;
//		printf("Addition :%d",c);
//	}
//	void main()
//	{
//		int num1,num2;
//		printf("Enter two numbers :");
//		scanf("%d %d",&num1,&num2);
//		addition(num1,num2);
//	}

//
//void EvenOdd(int c)
//{
//	if(c%2 ==0){
//		printf("%d is a even number :",c);
//	}
//	else{
//		printf("is a odd number :" ,c);
//	}
//}
//int main(){
//	int a;
//	printf("Enter a number");
//	scanf("%d",&a);
//	EvenOdd(a);
//	return 0;
//}

//
//void palindrome(int num)                        //PARAMETRIZED 
//{
//int temp = num,rev = 0,rem;
//while(num>0){
//
//rem = num %10;
//rev =rev*10+rem;
//num = num/10;
//}
//if(temp == rev){
//	printf("number is palindrome");
//}
//	else{
//		printf("number is not plaindrom");
//	}	
//}
//
//int main()
//{
//	int a;
//	printf("Enter a number :");
//	scanf("%d",&a);
//	palindrome(a);
//	return 0;
//	
//}
//	


//return with function
//
//int addition(int a,int b)
//{
//	int c;
//	c = a+b;
//	return c;
//}
//	void main(){
//		printf("%d",addition(10,20));
//	}




void palindrome(int num)                        //PARAMETRIZED 
{
int temp = num,rev = 0,rem;
while(num>0){

rem = num %10;
rev =rev*10+rem;
num = num/10;
}
if(temp == rev){
	printf("number is palindrome");
}
	else{
		printf("number is not plaindrom");
	}	
}

int main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	palindrome(a);
	return 0;
	
}
	
	

