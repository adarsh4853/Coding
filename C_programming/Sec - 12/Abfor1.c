#include<stdio.h>
#include<unistd.h>
#include<math.h>

int main()
{	int h;
	float t1,t2,v;
	printf("Enter height: ");
	scanf("%d",&h);
	printf("Time       Distance   Speed\n");
	t2=0;
	
	for(int i=0;i<=h;i++)
	{	t1=sqrt(2*i/9.81);
		v=sqrt(2*9.81*i);
		printf("%f   %d   %f\n",t1,i,v);
		usleep((t1-t2)*1000000);
		t2=t1;
	}
	return 0;
}
