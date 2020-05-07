#include<stdio.h>
int main()
{
	int n,num,i=1,no=0;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		num=n%2;	
		n=n/2;
		no=no+num*i;
		i=i*10;
	}
	
	printf("%d",no);
}
