#include<stdio.h>


//Write a program to check whether a student has passed or failed. A student passes if marks are 40 or above.----------------->(1)

int main()
{
	
//	int Student_marks;
//	printf("Enter a marks:");
//	scanf("%d",&Student_marks);
//	if(Student_marks>35)
//	{
//		printf("Student is passed");
//	}
//	else
//	{
//		printf("Student is failed");
//	}
//	return 0;
//}
	
	
	
	
	
	
	
	


//Write a program to check whether a character is:------------------------------------------>(2)
//An uppercase letter
//A lowercase letter
//A digit
//A special character

//char ch;
//printf("Enter a character:");
//scanf("%c",&ch);
//if(ch>='A' && ch<='Z'){
//	printf("This is uppercase charecter");
//}
//else if(ch>='a' && ch<='z'){
//printf("This is lowercase charecter");
//}
//else if(ch>='0'&& ch<='9'){
//	printf("This charecter is digit");	
//}
//else{
//	printf("Is a special charectar");
//}
//getch();









//Write a program to check whether a given character is an alphabet.------------------------->(3)

//char c;
//printf("Enter a character:");
//scanf("%c",&c);
//
//if (c >= 'A' && c <= 'Z'){
//
//	printf("IS a Uppercase alphabet");
//
//}
//else if(c >= 'a' && c <= 'z'){
//	printf("Is a lowercase alphabet");
//}
//else{
//	printf("IS not a alphabet");
//}










//Write a program to check whether a number is divisible by both 5 and 11.------------------------------>(4)

//int num;
//printf("Enter a number:");
//scanf("%d",&num);
//
//if(num%5==0){
//	printf("This number is diivisible by 5");
//}
//else if(num%11==0){
//	printf("This number is divisible by 11");
//}
//else{
//	printf("This number is not divisible by 5 and 11");
//}




//Write a program to check whether a given year is a leap year.------------------------------------>(5)
//int year;
//printf("Enter a year:");
//scanf("%d",&year);
//if (year < 1000)
//    {
//        printf("Please enter a valid 4-digit year.");
//    }
//
//
//else if((year%400 == 0 && year %100!=0)||(year%4==0)){
//	printf("%d is leap year",year);
//}
//else{
//	printf("%d is not leap year",year);
//}









//Write a program to assign grades based on marks:----------------->(6)
//
//90–100 = Grade A
//80–89 = Grade B
//70–79 = Grade C
//60–69 = Grade D
//Below 60 = Grade F


//int marks;
//printf("Enter a marks:");
//scanf("%d",&marks);
//
//if(marks>=90&&marks<=100){
//	printf("Mark is %d Grade A",marks);
//}
//
//else if(marks>=80&&marks<=89){
//	printf("Mark is %d Grade B",marks);
//}
//else if(marks>=70&&marks<=79){
//	printf("Mark is %d Grade C",marks);
//}
//else if(marks>=60&&marks<=69){
//	printf("Mark is %d Grade D",marks);
//}
//else{
//	printf("Mark is %d Grade F",marks);
//}




//Write a program to calculate whether there is a profit, loss, or no profit/no loss based on the cost price and selling price.--->(7)

//
//int selling_price,cost_price,profit,Loss;
//printf("Enter a selling_price:");
//scanf("%d",&selling_price);
//
//printf("Enter a cost_price:");
//scanf("%d",&cost_price);
//
//if(selling_price>cost_price){
//	profit = selling_price - cost_price;
//	printf("profit = %d",profit);
//}
//else if(cost_price>selling_price){
//	Loss = cost_price - selling_price;
//	printf("Loss = %d",Loss);
//}
//else{
//	printf("no profit and loss");
//}






//Find the smallest of three numbers.------------------->(8)

//int a,b,c;
//printf("Enter a numbers:");
//scanf("%d %d %d",&a,&b,&c);
//
//if(a<b && a<c)
//{
//	printf("%d is a smallest number",a);
//}
//else if(b<a && b<c)
//{
//	printf("%d is a smallest nummber",b);
//}
//else{
//	printf("%d is a smallest number",c);
//}




//Write a program to check whether an entered alphabet is a vowel or a consonant.-------------->(9)


char chr;
printf("Enter a character:");
scanf("%c",&chr);

if (chr == 'A'||chr == 'E'||chr == 'I'||chr =='O'||chr == 'U'||chr == 'a'||chr == 'e'||chr == 'i'||chr =='o'||chr =='u' ){
	printf("%c Is a Vowel",chr);
}
else{
	printf("%c Is a consonant",chr);
}

return 0;
}
	
	
	
	
	
	
	
	
	
	
	
