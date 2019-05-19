#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the dividend\t");
	scanf("%d",&a);
	printf("Enter the divisor\t");
	scanf("%d",&b);
	if(a>=b)
		{
			c=a/b;
			int d=a%b;
			printf("The quotient is %d and remainder is %d\n",c,d);

		}
	else
		printf("First number must be greater than second number\n");

}
