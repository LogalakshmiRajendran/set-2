#include<stdio.h>
int main()
{
    int c,d,i,n=0,temp,r;
    printf("Enter the two numbers ");
    scanf("%d %d",&c,&d);
    for(i=c;i<=d;i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
         n=n+r*r*r;
            temp=temp/10;
        }
        if(i==n)
        {
            printf("%d",i);
        }
    }
    return 0;
}
