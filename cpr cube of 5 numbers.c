#include<stdio.h>

int main()

{
int i ,cube;
    printf("input number of terms:");
    
    scanf("%d", &cube);
    for(i=1; i<= cube; i++)
    {
    printf("number is: %d and cube of the %d is: %d\n", i,i, (i*i*i));
    }
    return 0;
}