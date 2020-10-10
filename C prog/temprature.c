#include<stdio.h>
void main()
{
    float c,f;
    printf("enter the temperature in fahrenheit\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temp. in ceentigrade = %f",c);
}
