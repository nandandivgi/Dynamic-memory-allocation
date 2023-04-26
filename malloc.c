#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *p;
	p=(int*)calloc(2,sizeof(int));
	
	*p = 10;
	printf("The elements allocated are %d\n",*p);
	
	p++;
	
	*p = 7;
	printf("The elements allocated are %d\n",*p);
	
	p = realloc(p,3*sizeof(int));
	
	*p = 200;
	printf("The elements allocated are %d\n",*p);
	
	return 0;
}
