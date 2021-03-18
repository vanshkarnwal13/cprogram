#include<stdio.h>
int main()
{
    int n,a,sum=0,m;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }
    printf("The sum of digits of %d is %d\n ",m,sum);
return 0;

}
