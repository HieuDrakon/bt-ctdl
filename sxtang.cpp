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
void sxdoicho(int a[5], int n)
{
	hoanvi(int i, int j)
	{
		int t=i;
		i=j;
		j=t;
	}
	for(int i=0; i<n-1;i++)
		for(int j=i+1;j<n; j++)
 			if(a[i]<a[j])
			hoanvi(a[i],a[j]);
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
	int i;
	int j;
	NHAPMANG(a,n);
	XUATMANG(a,n);
	hoanvi(i,j);
	sxdoicho(a,n);
}
