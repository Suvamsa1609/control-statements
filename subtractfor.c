#include<stdio.h>
void main()
{
	int a,b,i;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	for(i=b;i>a;i--)
	{
		printf("%d ",i);
	}
}
