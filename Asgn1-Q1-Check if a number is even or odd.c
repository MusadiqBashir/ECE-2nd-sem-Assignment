//Sat, Jul 15 || Musadiq Bashir || ECE-22-17
//Question: Check if a number n is even or odd.

#include <stdio.h>

int main()
{
    //variables
    int n;

    //input
    printf("Enter your number: ");
    scanf("%d", &n);

    //output
    if(n%2==0)
    printf("Your number is even.\n");
    else
    printf("Your number is odd.\n");

    return 0;
}
