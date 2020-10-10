#include<stdio.h>
int main()
{
    int i,j,n,arr[10],count=0;
    printf("enter the length of array\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++)
    {

        if(arr[i]==arr[i])
        count++;
    }
    printf("%d",count);


}

