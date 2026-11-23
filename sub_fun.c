#include<stdio.h>
int sub(int a,int b);
int main()
{
    int a=10,b=7;
    int c=sub(10,7);

    printf("The Substraction is:%d\n",c);
}
int sub(int a , int b)
{
    int c; 
     c=a-b;
    return c;
}