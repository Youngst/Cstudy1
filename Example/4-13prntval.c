#include <stdio.h>

int main()
{
	int bph2o=212;
	int rv;

	rv=printf("%d F is water's boilling point.\n",bph2o );
	printf("The printf() functiong printed %d characters\n",rv);

	return 0;
}