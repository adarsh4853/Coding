#include<stdio.h>
#define SIZE 100
int FindDegree(char a[]);
void RemoveError(char a[],char b[]);
void AddPoly(char a[],char shuffle[]);
void Order(char a[],char o[]);
void main(){
    char a[SIZE];
    printf("Enter the polynomial:");
    scanf("%s",a);
    printf("Degree of Polynomial:%c\n",FindDegree(a));
    char b[SIZE];
    RemoveError(a,b);
    printf("Polynomial after removing error:%s\n",b);
    char shuffle[SIZE];
    printf("Enter the shuffled Polynimial:");
    scanf("%s",shuffle);
    return;
}

int FindDegree(char a[]){
    int l = 0;
    while(a[l]) l++;
    for(int i=l-1;i>=0;i--){
        if(a[i] >='0' && a[i]<='9' ){
            return a[i];
            

        }

    }
}
void RemoveError(char a[],char b[]){
    int j=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!='E' && a[i]!='R' && a[i]!='O'){
            b[j]=a[i];
            j++;
        }
    }
    return;
}
void Order(char a[],char o[]){
    int i=0;
    
}
// 2E+3Rx+R7Ox^R7
// 2+3x+7x^7