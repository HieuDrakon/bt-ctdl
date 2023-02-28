#include<stdio.h>
#include<conio.h>
long tongsc(int n)
{ 
	if(n%2==0,n>=2)
	{
		return (2+n)*((n-2)/2+1)/2;
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
	long a= tongsc(n);
	printf("\n kq %d",a);	
}