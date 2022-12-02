#include<stdio.h>

int main(){
    int temp,rev,n,rem,min,max,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for ( i = min; i < max+1; i++)
    {
        rev=0;
        for ( temp = n; temp >0; temp=temp/10)
        {
            rem=temp%10;
            rev=(rev*10)+rem;

        }
        if (n==rev){
            printf(n);
        }
        
    }
    

}