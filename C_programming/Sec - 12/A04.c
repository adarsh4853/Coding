#include<stdio.h>

int main()
{
	int opt,temp,x,index;
	char a[100],brace,k=6,z=6,brace2;
	a[0]='[';
	a[1]='(';
	a[2]='(';
	a[3]=')';
	a[4]=')';
	a[5]=']';
	for(int i=0;;i++)
	{
		printf("1: Insert\n2: Delete\n3. Delete all\n4: Search\n5: Print\n6: Quit\n");
		printf("Enter an option: ");
		scanf(" %d",&opt);
		
		if(opt==6)
		{
			printf("Quitting\n");
			break;
		}
		
		if(opt==1)
		{
			printf("Enter the brace to insert: ");
			scanf(" %c",&brace);
			printf("Enter index: ");
			scanf("%d",&index);
			if(brace=='(')
			{
				brace2=')';
			}
			if(brace=='[')
			{
				brace2=']';
			}
			if(brace=='{')
			{
				brace2='}';
			}
			if(brace==')')
			{
				if(index<k/2)
				{
					for(int f=k;f>=0;f--)
					{
						a[f]=a[f-1];
					}
				k=k+2;
				brace2='(';
				a[0]=brace2;
				a[k-1]=brace;
				for(int j=0;j<k;j++)
			{
				printf("%c,",a[j]);
			}
			printf(" \b\b \n");
				continue;
				}
			}
			if(brace==']')
			{
				if(index<k/2)
				{
					for(int f=k;f>=0;f--)
					{
						a[f]=a[f-1];
					}
				k=k+2;
				brace2='[';
				a[0]=brace2;
				a[k-1]=brace;
				for(int j=0;j<k;j++)
			{
				printf("%c,",a[j]);
			}
			printf(" \b\b \n");
				continue;
				}
			}
			if(brace=='}')
			{
				if(index<=k/2)
				{
					for(int f=k;f>=0;f--)
					{
						a[f]=a[f-1];
					}
				k=k+2;
				brace2='{';
				a[0]=brace2;
				a[k-1]=brace;
				for(int j=0;j<k;j++)
			{
				printf("%c,",a[j]);
			}
			printf(" \b\b \n");
				continue;
				}
			}
			
			for(int l=k;l>index;l--)
			{
				a[l]=a[l-1];
			}
			a[index]=brace;
			k=k+1;
			for(int l=k;l>k-index;l--)
			{
				a[l]=a[l-1];
			}
			a[k-index]=brace2;
			k=k+1;
			for(int j=0;j<k;j++)
			{
				printf("%c,",a[j]);
			}
			printf(" \b\b \n");
		}
		if(opt==5)
		{
			for(int j=0;j<=k;j++)
			{
				printf("%c,",a[j]);
			}
			printf(" \b\b \n");
		}
		if(opt==4)
		{
			printf("Enter the brace to search: ");
			scanf(" %c",&brace);
			printf("Brace found in positions: ");
			for(int m=0;m<k;m++)
			{
				if(a[m]==brace)
				{
					printf(" %c at %d, ",a[m],m);
					printf(" %c at %d",a[k-m-1],k-m-1);
				}					
			}
			printf("\n");
		}
		if(opt==2)
		{
			printf("Enter the brace to delete: ");
			scanf(" %c",&brace);
			for(int m=0;m<k;m++)
			{
				if(a[m]==brace)
				{
					for(int n=m;n<k-1;n++)
					{
						a[n]=a[n+1];
					}
					for(int n=k-m-2;n<k-2;n++)
					{
						a[n]=a[n+1];
					}
					k=k-2;
				}
				if(a[m]==brace)
				{
					for(int n=m;n<k-1;n++)
					{
						a[n]=a[n+1];
					}
					for(int n=k-m-2;n<k-2;n++)
					{
						a[n]=a[n+1];
					}
					k=k-2;
				}
				if(a[m]==brace)
				{
					for(int n=m;n<k-1;n++)
					{
						a[n]=a[n+1];
					}
					for(int n=k-m-2;n<k-2;n++)
					{
						a[n]=a[n+1];
					}
					k=k-2;
				}
			}
			for(int j=0;j<k;j++)
			{
				printf("%c,",a[j]);
			}
			printf(" \b\b \n");
			
		}	
	}
	return 0;
}
