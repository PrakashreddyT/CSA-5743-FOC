#include<stdio.h>

int main()

{

	int first,second,temp;	printf("enter first number:");

	scanf("%d",&first);

	printf("enter second number:");

	scanf("%d",&second);

	temp=first;

	first=second;

	second=temp;

	printf("\nafter swapping,first number=%d\n",first);

	printf("\nafter swapping,second number=%d\n",second);

	return 0;

}
