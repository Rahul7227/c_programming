#include<stdio.h>
int main()
{
	int x,i;
	printf("enter the num :");
	scanf("%d",&x);
	for(i=2;x>1;i++)
	{
		while(x%i==0)
		{
			printf("%d ",i);
			x=x/i;
		}
	}
}












