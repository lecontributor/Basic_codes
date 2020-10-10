#include<stdio.h>
void main()
{
        int arr[7],n,i,rs;
        arr[7]=(500,100,50,10,5,2,1);
       scanf("%d",&n);
        for(i=0;i<=6;i++)
        {
            n=n%arr[7];

            printf("%d",n);
        }
}
