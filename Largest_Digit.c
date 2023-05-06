#include<stdio.h>
int main()
{
    int num,max=0,digit;
    scanf("%d",&num);
    while (num>0)
    {
    digit=num%10;
    if (max<digit)
    {
        max=digit;
    }
    num=num/10;
    }
   printf("%d",max);
}



