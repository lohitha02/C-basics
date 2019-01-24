#include <stdio.h>
int main()
{	long long int n,x,y;
    	long long int x1,y1;
	scanf("%lld %lld %lld",&n,&x,&y);
	x1=(((x-1^2)+(y-1^2))^1/2);
	y1=(((n-x^2)+(n-y^2))^1/2);
	if(x==1 && y==1){
		printf("White");
	}
	else if(x==n && y==n){
		printf("Black");
	}
	else if(x1<y1){
		printf("White");
	}
	else if(y1<x1){
		printf("Black");
	}
	else if(x1==y1){
		printf("White");
	}
	return 0;
}
