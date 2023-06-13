#include <stdio.h>

int main()
{
	int a = 10;
	double PI = 3.16145;
	double sum = a + PI;
	
	printf("%lf \n", sum); 

	printf("%d \n", a > PI);
	
	printf("a size = %lu \n", sizeof(a));
	printf("PI size = %lu \n", sizeof(PI));
}
