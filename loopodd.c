#include<stdio.h>
void main()
{
	int a,b,i;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
}
