#include<stdio.h>
int main()
{
    int pin,attempts=0;
    while(attempts<3)
    {
        printf("Enter pin: \n");
        scanf("%d",&pin);
         if(pin==1234)
        printf("Correct pin\nAccess Granted\n");
        else
    {
        printf("Wrong password \n");
      printf("Try Again\n");
        attempts++;
}
}
printf("Access Expired\n");
return 0;
}