#include<stdio.h>
int main()
{
    int a,b,i,sum=0,temp,r;
    printf("Enter the two numbers ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d",i);
        }
    }
    return 0;
}
