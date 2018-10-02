#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf(" %d is greatest",a);
    }
    else
    {
    printf("%d is greatest",b);
    }
}
