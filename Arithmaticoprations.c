#include<stdio.h>
int main()
{
	int a,b;
	a=35;
	b=7;
	int add,sub,mul,div,mod;
	
	add=a+b;
	printf("Addition=%d",add);
	
	sub=a-b;
	printf("\nSubstraction=%d",sub);
	
	mul=a*b;
	printf("\nMultiplication=%d",mul);
	
	div=a/b;
	printf("\nDevide=%d",div);
	
	mod=a%b;
	printf("\nMod=%d", mod);
}
