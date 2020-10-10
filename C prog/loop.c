#include<stdio.h>
#include<math.h>
int main()
{
    int arr1[3][3],arr2[3][3];
    int n,i,m,j;
    printf("enter size of matrix\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf("%d",arr[i][j]);
    }

}

