#include<stdio.h>
int div(int a,int b);
int main()
{
    int a=10,b=5;
    float c=div(10,5);

    printf("The division is: %f\n",c);
}

int div(int a,int b)
{
    float c;
    c=a/b;

    return c;
}