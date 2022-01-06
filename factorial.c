#include<stdio.h>
void main()
{
	int x,n,pro=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		pro=pro*x;
	}
	printf("%d ",pro);
}
