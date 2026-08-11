//decision making----->  1)if    2)if else  3)ladder(if else if)   4)switch


//loops---->1)for   2)while  3)do while




//even odd num code


#include<stdio.h>
int main()
{
//	int a = 51;
//	if(a%2==0){
//		printf("a is a even number");
//	}
//	else{
//		printf("a is a odd number\n");
//	}
//	
//	
//	
//	
//	
//	
//	int c = 10;
//	int b = 20;
//	if (c==b){
//		printf("this is right statemnt");
//	}
//	
//		printf("hello good morning");





//check weather the given number is +ve or -ve


int a = -100;
if(a>0){
	printf("a is positive number\n");
}
else{
	printf("a is negative numbber\n");
}



//to check weather the given two num which is greater

int p;
int q;
printf("enter a number:");
scanf("%d%d",&p,&q);
if(p>q){
	printf("p is greater than q and value of p is:%d\n",p);
}
else{
	printf("q is greater than p and value of q is :%d\n ",q);
}




//Age is eligible for vote or not

int age;
printf("enter the age:");
scanf("%d",&age);
if(age>=18){
	printf("yes eligible for vote");
}
else{
	printf("not eligible for vote");
}
	
	return 0;
}
