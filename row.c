#include<stdio.h>
int main()
{
    int arr[10][10];
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[r][c]);
            sum=sum+arr[r][c];
        }
        printf("%d",sum);
        printf("\n");
    }
    
}