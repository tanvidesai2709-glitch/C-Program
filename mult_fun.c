#include<stdio.h>
int mult(int a,int b);
int main()
{
    int a=7,b=6;
    int c=mult(7,6);
    printf("The Multiplication is: %d\n",c);
}

int mult(int a,int b)
{
    int c;
    c=a*b;

    return c;
}