#include<stdio.h>
int main()
{
    int n,a,c=0,m;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        c=c*10+a;
    }       
    printf("The reverse of %d is %d\n",m,c);
return 0;
}