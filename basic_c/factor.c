#include<stdio.h>

int main(){
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for ( i = 1; i < n+1; i++)
    {
        if (n%i==0){
            printf("%d",&i);
        }
    }
    
}