#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("The numbers are %d , %d\n", a, b);
	printf("After swapping : %d , %d", b, a);
	return 0;
}
