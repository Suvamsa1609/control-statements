#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("%d ",sum);
}
