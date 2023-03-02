#include<stdio.h>
#include<conio.h>
void NHAPMANG(int a[5],int n)
{
	printf("nhap so pt mang ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
int s(int a[5],int n)
{
	int s=0;
	for (int i=0;i<n;i++)
	{
	if(a[i]%2==0)
		{
			return s+a[i];
		
		}
	}
}
void XUATMANG(int a[5],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("%d",i);
	}
}
int main()
{
	int n;
	int a[5];
	NHAPMANG(a,n);
	XUATMANG(a,n);
	printf(" tong so chan %d ",s(a,n));
}