#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter three digit number : ");
    scanf("%d",&n);
    int m=n,s=0,a;
    for(n;n>0;n=n/10)
    {
        a=n%10;
        //n=n/10;
        s=s+(a*a*a);
        //s=s+pow(a,3);
    }
    printf("%d \n",s);
    if(s==m)
        printf("%d is an armstrong number\n ",m);
    else
        printf("%d is not an armstrong number\n ",m);
return 0;        
}