	#include<math.h>#include<stdio.h>

int main()

{

	int num,originalnum,remainder,n=0,result=0;

	printf("enter an integer:");

	scanf("%d",&num);

	originalnum= num;

	for(originalnum=num;originalnum!=0;++n)

	{

		originalnum/=10;

	}

	for(originalnum=num;originalnum!=0;originalnum/=10)

	{

		remainder=originalnum%10;

		result+=pow(remainder,n);

	}

	if((int)result==num)

	printf("%d is an amstrong number",num);

	else

	printf("%d is not an amstrong number",num);

	return 0;

}
