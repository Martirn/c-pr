//logical operators voting eligibility
# include<stdio.h>


int main()
{
int age;

char nationality []="kenyan";
printf("input your age:");
scanf("%d",&age);

printf("input your nationality:");
scanf("%s",& nationality);

if(age>=18)
{
printf("you are eligible to vote");
} 
else
{
printf("you are not eligible to vote");
}

    return 0;
}