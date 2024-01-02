#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	//srand(time(NULL));
	int num,min,max,sum;
	int randi=(rand() % (95+1-5)) + 5;
	num=randi;
	float mean=(num+randi)/2.0;
	min=randi,max=randi;
	for(int i=1;;i++)
	{//randi=(rand() % (95+1-5)) + 5;				
	sum=sum+randi;
	if(max<randi) max=randi;
	if(min>randi) min=randi;
	
	mean=(sum)*1.0/i;
	num=randi;
	
	
	 
	printf("Iteration %d: Number %d: maximum = %d, minimum = %d, mean = %f\n",i,num,max,min,mean);
	if(randi==69) break;
	randi=(rand() % (95+1-5)) + 5;
	//randi2 = (rand() % (95+1-5)) + 5;
	}
	return 0;
} 


