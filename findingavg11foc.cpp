#include<stdio.h>

int main()

{

	int i,n,sum=0,number;	float  avg;

	printf("enter the range of number:\n");

	scanf("%d",&n);

	printf("\n enter the element one by one:\n");

	for(i=0;i<n;i++)

	{

		scanf("%d",&number);

		sum+=number;

	}

	avg=sum/n;

	printf("\n sum of the %d numbers =%d",n,sum);

	printf("\n average of the %d numbers=%f",n,avg);

	return 0;

}
