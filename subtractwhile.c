#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	while(b>a)
	{
		printf("%d ",b);
		b--;
	}
}
