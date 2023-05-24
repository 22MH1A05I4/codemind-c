#include<stdio.h>
int main()
{
    int n,cnt1=0,cnt2=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        cnt1++;
        else
        cnt2++;
    }
    printf("%d %d",cnt1,cnt2);
}