#include<stdio.h>

int main()
{
    int n,a=0,b,c,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Entered integer n is %d",n);

    for(i=1;i<30;i++)
    {
        if(i>n){
            for(int j=2;j<i;j++){
                if(i%j==0){
                   printf("%d",j);
                   a++;
                   j++;
                }
                else{
                    j++;
                }
            
        }
        if(a>=4){
                b=i;
                printf("%d",i);
                break;
            
            
        //if(a>=4) break;
    }}
    return 0;
}}
