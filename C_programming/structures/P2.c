#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int rollno;
	float CGPA;
};

struct student search_name(struct student arr[], int n, char s[])
{
	int flag;
	struct student a={'\0',0,0};
	for(int i=0;i<n;i++)
	{
		flag=strcmp(arr[i].name,s);
		if(flag==0)
		{
			a=arr[i];
			break;
		}
	}
	return a;
}

int main()
{
	struct student arr[100],a;
	int n;
	char s[20];
	printf("Enter number of students:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter name: ");
		scanf("%s",arr[i].name);
		//arr[i].name = getchar();
		printf("Enter roll no. : ");
		scanf("%d",&arr[i].rollno);
		printf("Enter CGPA: ");
		scanf("%f",&arr[i].CGPA);
	}	
	
	/*for(int i=0;i<n;i++)
	{
		printf("Name: ");
		printf("%s\n",arr[i].name);
		printf("Roll no. : ");
		printf("%d\n",arr[i].rollno);
		printf("CGPA: ");
		printf("%f\n",arr[i].CGPA);
		printf("\n");
	}*/
	
	printf("Enter student name: ");
	scanf("%s",s);
	
	a=search_name(arr,n,s);
	
	if(a.name!="\0")
	{
		printf("Name: ");
		printf("%s\n",a.name);
		printf("Roll no. : ");
		printf("%d\n",a.rollno);
		printf("CGPA: ");
		printf("%f\n",a.CGPA);
		printf("\n");	
	}
	else printf("Student not found\n");
		
	return 0;	
}













