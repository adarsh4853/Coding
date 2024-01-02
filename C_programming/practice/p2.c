#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *a,flag=0;
    a=(int *)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i;j<numsSize;j++)
        {
            if(j==i) continue;
            if((nums[i]+nums[j])==target)
            {
                *a=i;
                *(a+1)=j;
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    return a;
}

int main()
{
    int arr[3]={3,2,4},n=3,target=6,size;
    int *p;
    p=twoSum(arr,n,target,&size);
    printf("%d  %d\n",*p,*(p+1));
    return 0;
}