#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",& marks);
    if(marks>=90)
    {
        printf("Your Grade is A \n");
    }
    else if(marks>=75)
    {
        printf("Your Grade is B \n");
    }
    else if(marks>=60)
    {
        printf("Your Grade is C \n");
    }
    else if(marks>=40)
    {
        printf("Your Grade is D \n");
    }
    else
    {
        printf("You are fail \n");
    }
    return 0;
}