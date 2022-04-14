//rational operator
#include <stdio.h>

int main()
{
   int year;
   printf("Enter a year: ");
   scanf("%d",&year);
   /*Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. 
   */
   
   if((year%4 == 0 && year%100 != 0)||(year%4 == 0 && year%100 == 0 &&  year%400 == 0))
      printf("\n%d is a leap year.", year);
   else
      printf("\n%d is not a leap year.", year);
      
    return 0;
}














    