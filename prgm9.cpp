// find out the number is amstrong or not (3 digits)
#include<stdio.h>
int main()
{
	int n,r,sum=0,num;
	printf("enter the number");
	scanf("%d",&n);
	num=n;
	while(n!=0);
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(num==sum)
	printf("%d is amstong",num);
	else
	printf("%d is not amstrong",num);
	return 0;
}
