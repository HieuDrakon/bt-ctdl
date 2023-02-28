#include<stdio.h>
#include<conio.h> 
struct phanso
{
	int a;
	int b;
};
typedef struct phanso ps;
void nhap(ps &t)
{
	fflush(stdin);
	printf("Nhap tu so:\n ");
	scanf("%d",&t.a);
	printf("Nhap mau so:\n ");
	scanf("%d",&t.b);
	while(t.b==0)
	{
		printf("nhap sai,nhap lai\n");
		scanf("%d",&t.b);
	}
}
void xuat(ps &t)
{
	printf("%d/%d",t.a,t.b);
}
int main()
{
	phanso ps;
	nhap(ps);
	xuat(ps);
}