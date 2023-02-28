#include<stdio.h>
#include<conio.h>
#include<math.h>
long tongsl(int n)
{ 
	if(n%2==1,n>=1)
	{
		return ((n-1)/2+1)*(n+1)/2;
	}
	else
	{
		printf("nhap sai");
		return 0;
	}
}
int main()
{

	int n;
	printf("nhap n :");
	scanf("%d",&n);
	long a= tongsl(n);
	printf("\n kq %d",a);	
}