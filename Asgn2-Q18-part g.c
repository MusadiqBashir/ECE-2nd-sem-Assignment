//Sat, Jul 15 || Musadiq Bashir || ECE-22-17
//Question: Using loops output the following:
//1
//22
//333
//4444

#include <stdio.h>

int main()
{
    //var
    int i, j;

    //otp
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d", i);

        printf("\n");
    }
    return 0;
}
