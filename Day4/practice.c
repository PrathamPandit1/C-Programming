#include<stdio.h>
int main()
{
//	char ch;
//	printf("Enter any Character:");
//	scanf("%c",&ch);
//	
//	if(ch =='A'||ch=='E'||ch=='I'||ch =='O'||ch =='U'||ch =='a'||ch=='e'||ch=='i'||ch =='o'||ch =='u')
//	{
//		printf("%d Is a Vowel",ch);
//	}
//	else{
//		printf("%d Is a Consonant",ch);
//	}
	
	
	
	//for loop
	
	
//	int i;
//	for(i=1;i<=10;i++){
//		printf("%d\n",i);
//	}



    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is Not a Prime Number.\n", n);

    

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
