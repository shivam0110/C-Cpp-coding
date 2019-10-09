#include<stdio.h>
//program to print table of any number
void table( int n)
{  int p=1,i;
	for(i=1; i<=10 ; i++)
	{   p=n*i;
		printf("%d  *  %d  =  %d\n",n,i,p);
	
	}
	
}
int main()
{
	int n;
	printf("enter the no to get table----");
	scanf("%d",&n);
    table(n);
	
	return 0;
}