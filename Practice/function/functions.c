//#include <stdio.h>
//
//// Function to check Strong Number
//int strong(int num)
//{
//    int temp = num;
//    int digit, fact, sum = 0, i;
//
//    while (num >0)
//    {
//        digit =num % 10;
//                                         //A Strong Number is a number whose sum of the factorials of its digits is equal to the original number.
//        fact = 1;
//        for (i = 1; i <= digit; i++)
//        {
//            fact = fact * i;
//        }
//
//        sum =sum + fact;
//
//        num = num / 10;
//    }
//
//    if (sum== temp)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int num;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (strong(num))
//        printf("%d is a Strong Number.", num);                   //145
//    else
//        printf("%d is Not a Strong Number.", num);
//
//    return 0;
//}






//
//#include <stdio.h>
//
//// Function to check Perfect Number
//int perfect(int num)
//{
//    int i, sum = 0;
//
//    for(i = 1; i < num; i++)          //A Perfect Number is a number whose sum of all proper divisors (excluding itself) is equal to the number.
//    {
//        if(num % i == 0)
//        {
//            sum =sum + i;
//        }
//    }
//
//    if(sum == num)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int num;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if(perfect(num))
//        printf("%d is a Perfect Number.", num);
//    else
//        printf("%d is Not a Perfect Number.", num);
//
//    return 0;
//}







//#include <stdio.h>
//
//// Function to check Armstrong Number
//int armstrong(int num)
//{
//    int temp = num;
//    int digit, sum = 0;
//
//    while(num > 0)
//    {
//        digit = num % 10;
//
//        sum = sum + (digit * digit * digit);
//
//        num = num / 10;
//    }
//
//    if(sum == temp)
//        return 1;
//    else                                           //An Armstrong Number is a number where the sum of each digit raised to 
//	                                                                 //the power of the number of digits is equal to the original number.
//        return 0;
//}
//
//int main()
//{
//    int num;
//
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if(armstrong(num))
//        printf("%d is an Armstrong Number.", num);
//    else
//        printf("%d is Not an Armstrong Number.", num);
//
//    return 0;
//}










//
//#include<stdio.h>
//
//int reverse(int num)
//{
//    int digit;
//    int rev = 0;
//
//    while(num > 0)
//    {
//        digit = num % 10;
//
//        rev = rev * 10 + digit;
//
//        num = num / 10;
//    }
//
//    return rev;
//}
//
//int main()
//{
//    int num;
//
//    printf("Enter a number: ");
//    scanf("%d",&num);
//
//    printf("Reverse Number = %d", reverse(num));
//
//    return 0;
//}







#include<stdio.h>

void frequency(int num)
{
    int freq[10] = {0};
    int digit, i;

    while(num > 0)
    {
        digit = num % 10;

        freq[digit]++;

        num = num / 10;
    }

    printf("\nDigit Frequency\n");

    for(i = 0; i <= 9; i++)
    {
        if(freq[i] > 0)
        {
            printf("%d -> %d times\n", i, freq[i]);
        }
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    frequency(num);

    return 0;
}
