#include<stdio.h>
int main()
{
	for(int i=1900;i<=2100;i++)
	{
		if(i%4==0)
		{
			if(i%100==0)
			{
				if(i%400==0)
				printf("%d \n",i);
			}
			printf("%d \n",i);
		}
	}
}

				
				

