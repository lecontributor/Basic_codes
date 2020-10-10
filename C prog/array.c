#include<stdio.h>
int main()
{
    int i,n,arr[100],count=0,count1=0,count2=0;
    float r1=0,r2=0,r3=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++)
         {
            if(arr[i]<0)
            count++;
            else if(arr[i]>0)
            count1++;
            else
            count2++;
         }

    r1=count/sizeof(arr);
    r2=count1/sizeof(arr);
    r3=count2/sizeof(arr);
    printf("%f\n",r1);
    printf("%f\n",r2);
    printf("%f",r3);
    return 0;

}
