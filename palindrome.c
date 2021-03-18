#include<stdio.h>
int main()
{
    int n,c=0,a;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    int n2=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        c=c*10+a;
    }
    if(n2==c)
    printf("The number entered is a palindrome\n ");
    else
    printf("The number entered is not a palindrome\n");
return 0;
}