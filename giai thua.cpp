#include<stdio.h>
#include<conio.h>
#include<math.h>
long a(int n)
{
	if(n==0){
		return 1;
	}
	else
	return n*(n-1);
}

int main()
{
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	long kq= a(n);
	printf("\n kq %d",kq);
}
