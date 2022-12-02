// #include<stdio.h>

// int main(){
//     int n,c=0,i;
//     printf("enter a number:");
//     scanf("%d",&n);
//     for ( i = 1; i < n+1; i++){
//         if (n%i==0){
//             c+=1;
//         }
//     }
//     if (c>2){
//         printf("its not a prime");
//     }else{
//         printf("its prime");
//     }
// }

#include<stdio.h>

int main(){
    int a,b,i,j;
    printf("enter a starting number:");
    scanf("%d",&a);
    printf("enter a end number: ");
    scanf("%d",&b);
    for ( i = a; i <b ; i++)
    {
        if (i>1){
            for ( j = 2; j < i; j++)
            {
                if (i%j==0){
                    break;
                }
            }
            printf("%d",&i);
            
            
        }
    }
    
}