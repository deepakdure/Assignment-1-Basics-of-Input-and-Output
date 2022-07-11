#include<stdio.h>
int main()
{
    int R;
    float A,pi=22/7.0;
    printf("Enter the rsdius of circle\n");
    scanf("%d",&R);
    A=pi*R*R;
    printf("Area of circle is %f",A);
    return 0;
}