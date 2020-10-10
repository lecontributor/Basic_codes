#include<stdio.h>
int main()
{
    int i,n,arr[10],min_sum=0,max_sum=0;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min_sum+=arr[i];
    }
    for(i=1;i<n;i++)
    {
        max_sum+=arr[i];

    }
        printf("%d %d",min_sum,max_sum);
}



