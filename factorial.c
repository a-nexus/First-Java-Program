//branching pragram for only 1 branch
#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("enter the number where you want to print factorial:");
    scanf("%d",&n);
    int fact[n];
    fact[0]=0;
    fact[1]=1;
    for(int i=2;i<n;i++){
         fact[i]=fact[i-1]+fact[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d\t",fact[i]);
    }
return 0;
}