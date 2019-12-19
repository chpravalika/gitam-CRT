#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(a>c)
		printf("%d",a);
		else
		printf("%d",c)
	}
	else
	{
		if(b>c)
		printf("%d",b);
		else
		printf("%d",c);
	}
	return 0;
}
