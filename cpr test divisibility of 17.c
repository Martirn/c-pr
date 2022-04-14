// divisibility of 17
# include <stdio.h>
int main()
{
int number;
printf("enter an integer:");
scanf("%d", & number);

if(number %17==0)
printf("number divisible by 17");
else
printf("number not divisible by 17");

return 0;

}