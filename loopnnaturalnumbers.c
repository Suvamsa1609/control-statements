#include<stdio.h>
void main()
{
	int a,n,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("%d ",sum);
}
