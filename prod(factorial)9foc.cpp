#include<stdio.h>

int main()

{

	int i,fact=1,number;	printf("enter the number:");

	scanf("%d",&number);

	for(i=1;i<=number;i++)

	{

		fact=fact*i;

	}

	printf("factorial is",number,fact);

	return 0;

}
