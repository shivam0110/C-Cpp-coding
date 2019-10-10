#include<stdio.h>
int factorial(int n)
{
    int f=1;
    while (n!=1)
    {
        f=f*n;
        n=n-1;
        }return f;
    
}
int main()
{
    int x,f;
    printf("Enter Any Number To Find its FACTORIAL!!!!\n");
    /* Just see the MAGIC */
    scanf("%d",&x);
    f = factorial(x);
    printf("Factorial Of %d is %d",x,f);
    return 0;
}