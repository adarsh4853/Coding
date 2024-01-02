#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vec1[10000]={1,2,3,4,5};
	int vec2[10000]={6,7,8,9,7};
	int **ptr;
	ptr=(int**)malloc(1);
	ptr[0]=vec1;
	ptr[1]=vec2;
	
	printf("%d\n",*(ptr[0]+4));
	printf("%d\n",*(ptr[1]+4));
}
