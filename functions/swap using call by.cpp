#include<stdio.h>
void swap(int,int);
int main()
{
	int x,y;
	printf("\n Enter x,y : ");
	scanf("%d%d",&x,&y);
	printf("\n x=%d,y=%d before swap",x,y);
	swap(x,y);
	printf("\n x=%d,y=%d after swap",x,y);
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n a=%d,b=%d in function after swap",a,b);
}
