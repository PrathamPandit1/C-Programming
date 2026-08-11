//while loop


//intialization
//while(condittion)
//{
//	increment/decrement
//}



#include<stdio.h>
int main()
{
	
//	int i =1;   //intialization
//	while(i<=10)  //condition
//	{
//		printf("\n %d",i);
//		i++;  //increment/decrement
//	}
	
	
	
	
	
	//reverse 
	
//	int i = 10;
//	while(i>=1){
//		printf("\n%d",i);
//		i--;
//	}



//evenn num bet 1 to 10

//int i =1;
//while(i<=10){
//	if(i%2==0)
//	printf("%d is a even numbers\n",i);
//	i++;



//odd numbers
//int i =1;
//while(i<=10){
//	if(i%2==1)
//	printf("%d is a odd numbers\n",i);
//	i++;
//
//}

//take number inpute 234 and print reverse 432


//    int num, reverse = 0, rem;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    while (num != 0) {
//        rem = num % 10;          //reminder formula
//        reverse = reverse * 10 + rem;//reverse formula
//        num = num / 10;         
//    }
//
//    printf("Reversed number = %d", reverse);




//do while
//int i = 1;
//do
//{
//	printf("\n%d",i);
//	i++;
//}
//while(i<=10);


//palindrom
// int num, original, reverse = 0;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    original = num;  
//
//    while (num > 0) {
//        reverse = reverse * 10 + (num % 10);
//        num = num / 10;
//    }
//
//    if (original == reverse)
//        printf("%d is a palindrome.\n", original);
//    else
//        printf("%d is not a palindrome.\n", original);



int i,j,reverse = 0;
printf("Enter a number :");
scanf("%d",&i);

while(i>0){
	j = i%10;
	reverse = reverse * 10 + j;
	i = i/10;
	
}
    return 0;
}


