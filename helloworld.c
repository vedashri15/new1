#include<stdio.h>
int add(int *n1,int *n2);
int main()
{
	int a;
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	a=add(&n1,&n2);
	printf("the sum is %d",a);
}
int add(int *a ,int *b)
{
	return *a * *b;
}
