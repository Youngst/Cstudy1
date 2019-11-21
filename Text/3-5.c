#include <stdio.h>
#define time 3.156e+7
int main()
{
	int age;
	printf("please input your age:");
	scanf("%d",&age);
	printf("%e\n",age*time );

	return 0;
}