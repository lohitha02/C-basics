#include<stdio.h>
void pattern(int n);
int main()
{
	int n;
	printf("enter the value of n \n");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

