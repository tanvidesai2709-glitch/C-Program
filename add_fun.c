#include<stdio.h>
int add(int a,int b);
int main()
{
    int a=10,b=7;
    int c=add(10,7);

    printf("The addition is:%d\n",c);
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}