#include<stdio.h>
#include<math.h>
void main()
{
    int  a,b,n;
    char ch,choice;
    printf("Enter the two numbers\n");
    scanf("%d\t%d",&a,&b);
    printf("select operation\n");
    printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Modulo\n 6.Power\n 7.Square\n");
    scanf("%c",&choice);
    switch(choice)
    {
    case 1:
        printf("%d",a+b);
    }
}
