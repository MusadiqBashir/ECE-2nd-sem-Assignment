//Sat, Jul 15 || Musadiq Bashir || ECE-22-17
//Question: Using loops output the following:
//1
//12
//123
//1234

#include <stdio.h>

int main()
{
    //var
    int i, j;

    //calc and output
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
