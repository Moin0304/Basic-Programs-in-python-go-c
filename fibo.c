#include<stdio.h>
int main(){
    int a,b,c,n,i;
    printf("enter the number: ");
    scanf("%d",n);
    a=0;
    b=1;
    for (i=0; i<n; i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}