#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the no. \n");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0;i<=n;i++)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        printf("bye\n");

    }
}
